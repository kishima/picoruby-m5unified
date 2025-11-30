# picoruby-m5unified

PicoRuby binding for M5Unified and M5GFX libraries. This gem provides Ruby interface to control M5Stack devices on ESP32.

**EXPERIMENTAL**

This gem is currently in **experimental stage** and under active development.
- APIs may change without notice
- Testing coverage is insufficient

## Overview

`picoruby-m5unified` is a C extension for PicoRuby that wraps the M5Unified and M5GFX C++ libraries, enabling you to:

- Control M5Stack displays (text, graphics, colors)
- Use M5Stack peripherals (buttons, IMU, speaker, etc.)
- Build interactive applications on M5Stack devices

**Supported VM**: mrubyc (PICORB_VM_MRUBYC)

## Prerequisites

### Required Dependencies

This gem requires M5Unified and M5GFX libraries as git submodules in your R2P2-ESP32 project.

#### 1. Add M5GFX and M5Unified as submodules

```bash
cd R2P2-ESP32
git submodule add https://github.com/m5stack/M5GFX.git components/M5GFX
git submodule add https://github.com/m5stack/M5Unified.git components/M5Unified
git submodule update --init --recursive
```

#### 2. Update CMakeLists.txt

Edit `components/picoruby-esp32/CMakeLists.txt` to add M5Unified support:

**Add C++ source files to `SRCS`:**
```cmake
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5unified_core.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_color.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_display.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_draw.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_fill.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_image.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_lowlevel.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_text.cpp
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/ports/esp32/m5gfx_util.cpp
```

**Add include directory to `INCLUDE_DIRS`:**
```cmake
${COMPONENT_DIR}/picoruby/mrbgems/picoruby-m5unified/include
```

**Add M5 libraries to `PRIV_REQUIRES`:**
```cmake
M5Unified
M5GFX
```

#### 3. Enable the gem in build configuration

Add the following line to your `components/picoruby-esp32/picoruby/build_config/xtensa-esp.rb`:

```ruby
conf.gem core: 'picoruby-m5unified'
```

The gem is already included in R2P2-ESP32's default configuration.

## Build and Run

## Usage

### Basic Example

Create a file `storage/home/m5.rb`:

```ruby
require 'm5unified'

# Initialize M5Stack
M5.begin

# Get Display instance
disp = M5.Display

# Get display dimensions
w = disp.width
h = disp.height
puts "Display: #{w}x#{h}"

# Clear screen to black
disp.fill_screen(0x000000)

# Display text
disp.set_text_color(0xFFFFFF)  # White
disp.set_text_size(2)
disp.set_cursor(10, 10)
disp.print("Hello M5!")

# Draw shapes with RGB888 colors
disp.fill_rect(10, 40, 100, 60, 0xFF0000)      # Red rectangle
disp.fill_circle(w/2, h/2, 40, 0x00FF00)       # Green circle
disp.draw_line(0, 0, w-1, h-1, 0x0000FF)       # Blue line
disp.fill_triangle(200, 100, 250, 50, 300, 100, 0xFFFF00)  # Yellow triangle

# Main loop
loop do
  M5.update
  sleep 0.1
end
```

### Color Format

This gem uses **RGB888 format** (24-bit) for colors:

```ruby
# RGB888 format: 0xRRGGBB
red   = 0xFF0000
green = 0x00FF00
blue  = 0x0000FF
white = 0xFFFFFF
black = 0x000000
cyan  = 0x00FFFF
```

The display automatically handles color conversion to RGB565 format internally.

## Implemented Features

### M5Unified Core (20/20 methods) ✅

```ruby
M5.begin                  # Initialize M5Stack
M5.update                 # Update button/touch states
M5.Display                # Get Display instance
```

### M5GFX Display - Drawing Methods

```ruby
# Rectangle
disp.fill_rect(x, y, w, h, color)
disp.draw_rect(x, y, w, h, color)

# Circle
disp.fill_circle(x, y, radius, color)
disp.draw_circle(x, y, radius, color)

# Line
disp.draw_line(x0, y0, x1, y1, color)

# Triangle
disp.fill_triangle(x0, y0, x1, y1, x2, y2, color)
disp.draw_triangle(x0, y0, x1, y1, x2, y2, color)

# Screen
disp.fill_screen(color)
```

### M5GFX Display - Text Methods

```ruby
# Text output
disp.print(text)
disp.println(text)
disp.printf(text)

# Text settings
disp.set_text_color(color)
disp.set_text_size(size)
disp.set_cursor(x, y)

# Text drawing
disp.draw_string(text, x, y)
disp.draw_number(number, x, y)
```

### M5GFX Display - Color Methods

```ruby
# Color conversion
rgb16 = disp.color24to16(rgb24)
rgb24 = disp.color16to24(rgb16)

# Display info
w = disp.width
h = disp.height
```

### M5GFX Display - Other Methods

```ruby
# Pixel operations
disp.draw_pixel(x, y, color)

# Fast lines
disp.draw_fast_v_line(x, y, h, color)
disp.draw_fast_h_line(x, y, w, color)
```

## Future Implementations

The following M5Unified classes are planned for future:

### High Priority
- **Button_Class**
- **IMU_Class**
- **Speaker_Class**

### Medium Priority
- **Power_Class** - Battery management
- **RTC_Class** - Real-time clock
- **Touch_Class** - Touch panel (partially implemented)

### Low Priority
- **LED_Class** - RGB LED control
- **Mic_Class** - Microphone input

## License

MIT License

## Related Links

- [M5Unified](https://github.com/m5stack/M5Unified)
- [M5GFX](https://github.com/m5stack/M5GFX)
- [PicoRuby](https://github.com/picoruby/picoruby)
- [R2P2-ESP32](https://github.com/picoruby/R2P2-ESP32)
