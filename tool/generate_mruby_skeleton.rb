#!/usr/bin/env ruby
# frozen_string_literal: true

# Generate mruby C extension skeleton from YAML API definition
#
# Usage:
#   ruby generate_mruby_skeleton.rb m5unified_api.yaml -o output.c
#   ruby generate_mruby_skeleton.rb m5unified_api.yaml > output.c

require 'yaml'
require 'optparse'

class MRubySkeletonGenerator
  def initialize(yaml_file)
    @data = YAML.load_file(yaml_file)
    @classes = @data['classes'] || []
    # Remove duplicate method names, keep the one with most parameters
    deduplicate_methods!
  end

  def deduplicate_methods!
    @classes.each do |klass|
      methods_by_name = {}

      klass['methods'].each do |method|
        name = method['name']
        param_count = method['parameters']&.length || 0

        if methods_by_name[name].nil? || param_count > (methods_by_name[name]['parameters']&.length || 0)
          methods_by_name[name] = method
        end
      end

      klass['methods'] = methods_by_name.values
    end
  end

  def generate
    output = []

    # Header
    output << generate_header
    output << ""

    # Forward declarations
    output << generate_forward_declarations
    output << ""

    # Method implementations
    @classes.each do |klass|
      output << generate_class_methods(klass)
      output << ""
    end

    # Init function
    output << generate_init_function

    output.join("\n")
  end

  private

  def generate_header
    <<~HEADER
      /*
       * Auto-generated mruby C extension skeleton
       * Generated at: #{@data['generated_at']}
       * Source files: #{@data['source_files'].join(', ')}
       *
       * Usage example in Ruby:
       *   M5.begin(config)
       *   M5.update()
       *   M5.Display.start_write()
       *   M5.Display.fill_rect(x, y, w, h, color)
       *   M5.Display.end_write()
       *
       * Implementation notes:
       *   - M5 module: Wraps M5Unified singleton methods
       *   - M5Gfx class: Wraps M5GFX (LGFXBase) drawing methods
       *   - M5.Display: Should return M5Gfx instance wrapping M5.Display
       */

      #include <string.h>
      #include <mruby.h>
      #include <mruby/class.h>
      #include <mruby/data.h>
      #include <mruby/string.h>
      #include <mruby/variable.h>
      #include <mruby/array.h>

      // TODO: Include C++ headers
      // #include <M5Unified.h>
      // #include <M5GFX.h>
    HEADER
  end

  def generate_forward_declarations
    lines = ["/* Forward declarations */"]

    @classes.each do |klass|
      klass['methods'].each do |method|
        lines << "static mrb_value #{method_function_name(klass, method)}(mrb_state *mrb, mrb_value self);"
      end
    end

    lines.join("\n")
  end

  def generate_class_methods(klass)
    class_name = klass['name']
    lines = []

    lines << "/* =============================================="
    lines << " * Class: #{class_name}"
    lines << " * Namespace: #{klass['namespace']}"
    lines << " * File: #{klass['file']}"
    lines << " * ============================================== */"
    lines << ""

    klass['methods'].each do |method|
      lines << generate_method_implementation(klass, method)
      lines << ""
    end

    lines.join("\n")
  end

  def generate_method_implementation(klass, method)
    func_name = method_function_name(klass, method)
    method_name = method['name']
    return_type = method['return_type']
    params = method['parameters'] || []
    modifiers = method['modifiers'] || []

    # Build parameter extraction code
    param_extract = generate_parameter_extraction(params)

    # Build comment
    comment = []
    comment << "/*"
    comment << " * Method: #{klass['name']}.#{method_name}"
    comment << " * Return: #{return_type}"
    comment << " * Params: #{params.map { |p| "#{p['type']} #{p['name']}" }.join(', ')}"
    comment << " * Modifiers: #{modifiers.join(', ')}" unless modifiers.empty?
    comment << " * Line: #{method['line']}"
    comment << " */"

    # Function body
    body = []
    body << "static mrb_value"
    body << "#{func_name}(mrb_state *mrb, mrb_value self)"
    body << "{"

    unless params.empty?
      body << "    /* Extract parameters */"
      body << param_extract
      body << ""
    end

    body << "    /* TODO: Implement C++ method call */"
    body << "    /* Example:"
    body << "     * #{generate_cpp_call_example(klass, method)}"
    body << "     */"
    body << ""
    body << "    /* TODO: Convert return value to mrb_value */"

    # Generate return statement based on return type
    body << "    #{generate_return_statement(return_type)}"
    body << "}"

    (comment + body).join("\n")
  end

  def generate_parameter_extraction(params)
    return "    // No parameters" if params.empty?

    lines = []

    # Build mrb_get_args format string
    argc_vars = []
    format_chars = []

    params.each_with_index do |param, idx|
      var_name = param['name'].empty? ? "arg#{idx}" : sanitize_var_name(param['name'])
      type = param['type']

      # Determine format character and C type
      if type.include?('int') || type.include?('int32') || type.include?('int8')
        format_chars << 'i'
        lines << "    mrb_int #{var_name};"
        argc_vars << "&#{var_name}"
      elsif type.include?('bool')
        format_chars << 'b'
        lines << "    mrb_bool #{var_name};"
        argc_vars << "&#{var_name}"
      elsif type.include?('float') || type.include?('double')
        format_chars << 'f'
        lines << "    mrb_float #{var_name};"
        argc_vars << "&#{var_name}"
      elsif type.include?('char*') || type.include?('string')
        format_chars << 'z'
        lines << "    const char *#{var_name};"
        argc_vars << "&#{var_name}"
      else
        # Object or complex type
        format_chars << 'o'
        lines << "    mrb_value #{var_name};"
        argc_vars << "&#{var_name}"
      end
    end

    lines << ""
    lines << "    mrb_get_args(mrb, \"#{format_chars.join}\", #{argc_vars.join(', ')});"

    lines.join("\n")
  end

  def generate_cpp_call_example(klass, method)
    method_name = method['name']
    params = method['parameters'] || []
    modifiers = method['modifiers'] || []

    param_names = params.map.with_index do |p, idx|
      p['name'].empty? ? "arg#{idx}" : sanitize_var_name(p['name'])
    end

    if modifiers.include?('static')
      "#{klass['name']}::#{method_name}(#{param_names.join(', ')})"
    else
      "// Get C++ object instance first"
    end
  end

  def generate_return_statement(return_type)
    case return_type
    when 'void'
      "return mrb_nil_value();"
    when /int|int32|int8|size_t/
      "return mrb_fixnum_value(0); // TODO: return actual value"
    when 'bool'
      "return mrb_bool_value(false); // TODO: return actual value"
    when /float|double/
      "return mrb_float_value(mrb, 0.0); // TODO: return actual value"
    else
      "return mrb_nil_value(); // TODO: return wrapped object"
    end
  end

  def generate_init_function
    lines = []
    lines << "/* =============================================="
    lines << " * Initialization function"
    lines << " * ============================================== */"
    lines << ""
    lines << "void"
    lines << "mrb_picoruby_m5unified_gem_init_impl(mrb_state *mrb)"
    lines << "{"
    lines << "    struct RClass *m5_module;"
    lines << "    struct RClass *class_M5Gfx;"
    lines << ""
    lines << "    /* Define M5 module */"
    lines << "    m5_module = mrb_define_module(mrb, \"M5\");"
    lines << ""

    # M5Unified methods -> M5 module methods
    m5unified_class = @classes.find { |k| k['name'] == 'M5Unified' }
    if m5unified_class
      lines << "    /* M5Unified methods as M5 module methods */"
      m5unified_class['methods'].each do |method|
        method_name = method['name']
        func_name = method_function_name(m5unified_class, method)
        argc = method['parameters']&.length || 0

        lines << "    mrb_define_module_function(mrb, m5_module, \"#{snake_case(method_name)}\", #{func_name}, MRB_ARGS_REQ(#{argc}));"
      end
      lines << ""
    end

    # M5Gfx class
    m5gfx_class = @classes.find { |k| ruby_class_name(k['name']) == 'M5Gfx' }
    if m5gfx_class
      lines << "    /* Define M5Gfx class */"
      lines << "    class_M5Gfx = mrb_define_class(mrb, \"M5Gfx\", mrb->object_class);"
      lines << ""

      m5gfx_class['methods'].each do |method|
        method_name = method['name']
        func_name = method_function_name(m5gfx_class, method)
        argc = method['parameters']&.length || 0

        lines << "    mrb_define_method(mrb, class_M5Gfx, \"#{snake_case(method_name)}\", #{func_name}, MRB_ARGS_REQ(#{argc}));"
      end
      lines << ""
    end

    # Other classes (LGFX_Device, etc.)
    @classes.each do |klass|
      next if klass['name'] == 'M5Unified'
      next if ruby_class_name(klass['name']) == 'M5Gfx'

      ruby_name = ruby_class_name(klass['name'])
      var_name = class_var_name(ruby_name)

      lines << "    struct RClass *#{var_name};"
      lines << "    /* Define #{ruby_name} class */"
      lines << "    #{var_name} = mrb_define_class(mrb, \"#{ruby_name}\", mrb->object_class);"
      lines << ""

      klass['methods'].each do |method|
        method_name = method['name']
        func_name = method_function_name(klass, method)
        argc = method['parameters']&.length || 0

        lines << "    mrb_define_method(mrb, #{var_name}, \"#{snake_case(method_name)}\", #{func_name}, MRB_ARGS_REQ(#{argc}));"
      end

      lines << ""
    end

    lines << "    /* TODO: Initialize C++ objects */"
    lines << "    /* Example:"
    lines << "     * // Create global M5Unified instance"
    lines << "     * auto cfg = M5.config();"
    lines << "     * M5.begin(cfg);"
    lines << "     */"
    lines << ""
    lines << "    /* TODO: Setup M5.Display accessor */"
    lines << "    /* Example:"
    lines << "     * // Wrap M5.Display as M5Gfx instance"
    lines << "     * mrb_define_module_function(mrb, m5_module, \"Display\", mrb_m5_get_display, MRB_ARGS_NONE());"
    lines << "     */"
    lines << "}"

    lines.join("\n")
  end

  def method_function_name(klass, method)
    class_name = klass['name'] == 'LGFXBase' ? 'M5Gfx' : klass['name']
    "mrb_#{snake_case(class_name)}_#{snake_case(method['name'])}"
  end

  def class_var_name(class_name)
    "class_#{class_name}"
  end

  def ruby_class_name(class_name)
    # Convert C++ class name to Ruby class name
    # M5Unified -> M5Unified
    # LGFXBase -> M5Gfx
    case class_name
    when 'LGFXBase'
      'M5Gfx'
    else
      class_name
    end
  end

  def snake_case(name)
    name
      .gsub(/([A-Z]+)([A-Z][a-z])/, '\1_\2')
      .gsub(/([a-z\d])([A-Z])/, '\1_\2')
      .downcase
  end

  def sanitize_var_name(name)
    # Remove special characters and ensure valid C identifier
    name.gsub(/[^a-zA-Z0-9_]/, '_')
  end
end

# Main execution
def main
  input_file = ARGV[0]
  output_file = nil

  OptionParser.new do |opts|
    opts.banner = "Usage: generate_mruby_skeleton.rb <yaml_file> [options]"
    opts.on("-o", "--output FILE", "Output to file instead of stdout") do |file|
      output_file = file
    end
    opts.on("-h", "--help", "Show this help message") do
      puts opts
      exit
    end
  end.parse!

  unless input_file
    warn "Error: YAML file required"
    warn "Usage: generate_mruby_skeleton.rb <yaml_file> [options]"
    exit 1
  end

  unless File.exist?(input_file)
    warn "Error: File not found: #{input_file}"
    exit 1
  end

  generator = MRubySkeletonGenerator.new(input_file)
  skeleton = generator.generate

  if output_file
    File.write(output_file, skeleton)
    puts "Skeleton generated: #{output_file}"
    puts "Lines: #{skeleton.lines.count}"
  else
    puts skeleton
  end
end

main if __FILE__ == $PROGRAM_NAME
