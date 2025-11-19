# Text Display Example
#
# This example demonstrates text rendering capabilities
# using M5Gfx on M5Stack devices.

# Initialize M5
cfg = M5.config_t()
M5.begin(cfg)

# Setup display
M5.Display.fill_screen(0x0000)  # Black background

# Display header
M5.Display.start_write()
M5.Display.set_text_color(0xFFFF, 0x0000)  # White text on black
M5.Display.set_text_size(2)
M5.Display.set_cursor(10, 10, 2)
M5.Display.print("M5Unified + PicoRuby")
M5.Display.end_write()

# Counter
count = 0

puts "Text Display Example started"

# Main loop
loop do
  M5.update()

  # Update counter display
  M5.Display.start_write()

  # Clear counter area
  M5.Display.fill_rect(10, 50, 300, 40, 0x0000)

  # Display counter
  M5.Display.set_text_color(0x07E0, 0x0000)  # Green text
  M5.Display.set_text_size(3)
  M5.Display.set_cursor(10, 50, 2)
  M5.Display.print("Count: #{count}")

  # Display instructions
  M5.Display.set_text_color(0xFFFF, 0x0000)  # White text
  M5.Display.set_text_size(1)
  M5.Display.set_cursor(10, 100, 1)
  M5.Display.print("Button A: Increment")
  M5.Display.set_cursor(10, 115, 1)
  M5.Display.print("Button B: Reset")
  M5.Display.set_cursor(10, 130, 1)
  M5.Display.print("Button C: Decrement")

  # Display system info
  M5.Display.set_text_color(0x07FF, 0x0000)  # Cyan text
  M5.Display.set_cursor(10, 160, 1)
  update_msec = M5.get_update_msec()
  M5.Display.print("Update: #{update_msec}ms")

  M5.Display.end_write()

  # Button handling
  if M5.get_button(0).was_pressed()
    count += 1
    puts "Count: #{count}"
  end

  if M5.get_button(1).was_pressed()
    count = 0
    puts "Count reset"
  end

  if M5.get_button(2).was_pressed()
    count -= 1
    puts "Count: #{count}"
  end

  sleep(0.1)
end
