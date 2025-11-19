# Touch Drawing Example
#
# This example demonstrates touch input handling and drawing
# on M5Stack devices with touch screen (M5Stack Core2, CoreS3, etc.)

# Initialize M5
cfg = M5.config_t()
M5.begin(cfg)

# Setup display
M5.Display.start_write()
M5.Display.fill_screen(0xFFFF)  # White background
M5.Display.set_text_color(0x0000, 0xFFFF)  # Black text
M5.Display.set_cursor(10, 10, 2)
M5.Display.print("Touch to draw!")
M5.Display.end_write()

# Drawing state
last_x = nil
last_y = nil
current_color = 0xF800  # Red

puts "Touch Drawing App started"

# Main loop
loop do
  M5.update()

  # Check if touch is enabled
  if M5.Touch.is_enabled()
    detail = M5.Touch.get_detail()

    if detail.is_pressed()
      x = detail.x()
      y = detail.y()

      M5.Display.start_write()

      # Draw line from last position if exists
      if last_x && last_y
        M5.Display.draw_line(last_x, last_y, x, y, current_color)
      else
        M5.Display.draw_pixel(x, y, current_color)
      end

      M5.Display.end_write()

      last_x = x
      last_y = y
    else
      # Touch released, reset last position
      last_x = nil
      last_y = nil
    end
  end

  # Button A: Change color to red
  if M5.get_button(0).was_pressed()
    current_color = 0xF800  # Red
    puts "Color: Red"
  end

  # Button B: Clear screen
  if M5.get_button(1).was_pressed()
    M5.Display.start_write()
    M5.Display.fill_screen(0xFFFF)
    M5.Display.end_write()
    puts "Screen cleared"
  end

  # Button C: Change color to blue
  if M5.get_button(2).was_pressed()
    current_color = 0x001F  # Blue
    puts "Color: Blue"
  end

  sleep(0.01)
end
