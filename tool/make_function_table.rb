#!/usr/bin/env ruby
# frozen_string_literal: true

# M5Unified and M5GFX Public API Extractor
# Parses C++ header files and extracts public method definitions to YAML format
#
# Usage:
#   ruby make_function_table.rb                    # Output to stdout
#   ruby make_function_table.rb -o output.yaml     # Output to file
#   ruby make_function_table.rb --output api.yaml  # Same as above

require 'yaml'
require 'optparse'

# Configuration
SCRIPT_DIR = File.dirname(__FILE__)
PROJECT_ROOT = File.expand_path('..', SCRIPT_DIR)

TARGET_FILES = [
  "#{PROJECT_ROOT}/components/M5Unified/src/M5Unified.hpp",
  "#{PROJECT_ROOT}/components/M5GFX/src/lgfx/v1/LGFXBase.hpp"
]

# Classes to extract (if nil, extract all classes)
# LGFXBase includes all drawing and hardware control methods
# LGFX_Device is excluded as its methods are already in LGFXBase
TARGET_CLASSES = ['M5Unified', 'LGFXBase']

class CppParser
  # Match method declarations
  # Examples:
  #   void update()
  #   static bool begin(config_t cfg)
  #   board_t getBoard() const
  #   LGFX_INLINE void drawPixel(int x, int y)
  METHOD_REGEX = /^\s*(?:(?:LGFX_INLINE(?:_T)?|static|virtual|inline)\s+)*(\w+(?:::\w+)*(?:<[^>]+>)?(?:\s*[*&])?)\s+(\w+)\s*\(([^)]*)\)\s*(const)?\s*[;{]/

  # Match class definitions
  CLASS_REGEX = /^\s*class\s+(\w+)/

  # Match namespace definitions
  NAMESPACE_REGEX = /^\s*namespace\s+(\w+)/

  # Match public/private/protected sections
  SECTION_REGEX = /^\s*(public|private|protected)\s*:/

  attr_reader :classes

  def initialize
    @classes = []
  end

  def parse_file(filepath)
    return unless File.exist?(filepath)

    content = File.read(filepath)
    lines = content.lines

    current_class = nil
    current_namespace = []
    current_section = nil
    brace_depth = 0
    class_brace_depth = 0
    line_number = 0
    in_target_class = false

    lines.each do |line|
      line_number += 1

      # Detect namespace
      if match = line.match(NAMESPACE_REGEX)
        current_namespace.push(match[1])
      end

      # Detect class definition
      if match = line.match(CLASS_REGEX)
        class_name = match[1]
        # Only track target classes
        if TARGET_CLASSES.nil? || TARGET_CLASSES.include?(class_name)
          current_class = {
            'name' => class_name,
            'namespace' => current_namespace.join('::'),
            'file' => File.basename(filepath),
            'methods' => []
          }
          current_section = nil
          in_target_class = true
          class_brace_depth = brace_depth
        end
      end

      # Track brace depth for scope
      brace_depth += line.count('{')
      brace_depth -= line.count('}')

      # Detect section (public/private/protected)
      if in_target_class && match = line.match(SECTION_REGEX)
        current_section = match[1]
      end

      # Parse method declarations in public sections
      if current_class && current_section == 'public'
        if method = parse_method(line, line_number)
          current_class['methods'] << method
        end
      end

      # End of class definition (when brace depth returns to class level)
      if in_target_class && brace_depth <= class_brace_depth && line.include?('}')
        @classes << current_class unless current_class['methods'].empty?
        current_class = nil
        current_section = nil
        in_target_class = false
      end
    end
  end

  def parse_method(line, line_number)
    return nil if line.strip.start_with?('//')  # Skip comments
    return nil if line.include?('template')     # Skip template functions
    return nil if line.include?('operator')     # Skip operator overloads
    return nil if line.match(/^\s*~/)           # Skip destructors
    return nil if line.match(/^\s*\w+\s*\([^)]*\)\s*[:{]/) && !line.include?('(') # Skip constructors (simplified)

    match = line.match(METHOD_REGEX)
    return nil unless match

    return_type = match[1].strip
    method_name = match[2]
    params_str = match[3]
    is_const = match[4]

    # Skip if method name looks like constructor
    return nil if method_name == method_name.capitalize && !return_type.include?('::')

    modifiers = []
    modifiers << 'const' if is_const

    parameters = parse_parameters(params_str)

    {
      'name' => method_name,
      'return_type' => return_type,
      'parameters' => parameters,
      'modifiers' => modifiers,
      'line' => line_number
    }
  end

  def parse_parameters(params_str)
    return [] if params_str.strip.empty?

    params = []
    # Split by comma, but respect nested templates and parentheses
    depth = 0
    current_param = String.new

    params_str.each_char do |char|
      case char
      when '<', '('
        depth += 1
        current_param << char
      when '>', ')'
        depth -= 1
        current_param << char
      when ','
        if depth == 0
          params << parse_single_parameter(current_param.strip)
          current_param = String.new
        else
          current_param << char
        end
      else
        current_param << char
      end
    end

    params << parse_single_parameter(current_param.strip) unless current_param.strip.empty?
    params.compact
  end

  def parse_single_parameter(param_str)
    return nil if param_str.empty?

    # Remove default value if present
    param_str = param_str.split('=').first.strip

    # Match pattern: type name
    # Examples: "int32_t x", "const char* str", "config_t cfg"
    parts = param_str.split(/\s+/)

    if parts.length >= 2
      param_name = parts.last
      param_type = parts[0..-2].join(' ')

      {
        'type' => param_type,
        'name' => param_name
      }
    elsif parts.length == 1
      # Type only, no name (e.g., in function pointers)
      {
        'type' => parts[0],
        'name' => ''
      }
    else
      nil
    end
  end

  def to_hash
    {
      'generated_at' => Time.now.strftime('%Y-%m-%d %H:%M:%S %z'),
      'source_files' => TARGET_FILES.map { |f| File.basename(f) },
      'classes' => @classes
    }
  end
end

# Main execution
def main
  output_file = nil

  OptionParser.new do |opts|
    opts.banner = "Usage: make_function_table.rb [options]"
    opts.on("-o", "--output FILE", "Output to file instead of stdout") do |file|
      output_file = file
    end
    opts.on("-h", "--help", "Show this help message") do
      puts opts
      exit
    end
  end.parse!

  parser = CppParser.new

  TARGET_FILES.each do |file|
    if File.exist?(file)
      puts "Parsing #{File.basename(file)}..." if output_file
      parser.parse_file(file)
    else
      warn "Warning: File not found: #{file}"
    end
  end

  output_data = parser.to_hash
  yaml_output = output_data.to_yaml

  if output_file
    File.write(output_file, yaml_output)
    puts "Output written to: #{output_file}"
    puts "Total classes parsed: #{parser.classes.length}"
    puts "Total methods extracted: #{parser.classes.sum { |c| c['methods'].length }}"
  else
    puts yaml_output
  end
end

main if __FILE__ == $PROGRAM_NAME
