MRuby::Gem::Specification.new('picoruby-m5unified') do |spec|
  spec.license = 'MIT'
  spec.author  = 'kishima'
  spec.summary = 'M5Unified library binding for PicoRuby'

  # Add M5Unified include paths
  spec.cc.include_paths << "#{dir}/include"
end
