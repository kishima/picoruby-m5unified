# Basic M5Unified Display Example
#
# This example demonstrates basic usage of M5Unified and M5Gfx
# for displaying graphics on M5Stack devices.

# Initialize M5
puts "Initializing M5..."
cfg = M5.config_t()
M5.begin(cfg)

# Get display dimensions
width = M5.Display.width()
height = M5.Display.height()
puts "Display: #{width}x#{height}"

# Clear screen
M5.Display.fill_screen(0x0000)  # Black

# Draw some shapes
M5.Display.start_write()

# Draw a red rectangle
M5.Display.fill_rect(10, 10, 100, 60, 0xF800)  # Red

# Draw a green circle
M5.Display.fill_circle(180, 120, 40, 0x07E0)  # Green

# Draw a blue line
M5.Display.draw_line(0, 0, width, height, 0x001F)  # Blue

M5.Display.end_write()

# Main loop
loop do
  M5.update()

  # Check button press
  if M5.get_button(0).was_pressed()
    puts "Button A pressed!"

    # Draw random pixel
    x = rand(width)
    y = rand(height)
    color = rand(0xFFFF)
    M5.Display.draw_pixel(x, y, color)
  end

  sleep(0.01)
end
