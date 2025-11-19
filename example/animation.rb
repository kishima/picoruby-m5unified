# Animation Example
#
# This example demonstrates animation using M5Gfx
# with bouncing ball and shapes.

# Initialize M5
cfg = M5.config_t()
M5.begin(cfg)

width = M5.Display.width()
height = M5.Display.height()

# Ball properties
ball_x = width / 2
ball_y = height / 2
ball_radius = 15
ball_vx = 3
ball_vy = 2
ball_color = 0xF800  # Red

# Clear screen
M5.Display.fill_screen(0x0000)  # Black

puts "Animation Example started"
puts "Display: #{width}x#{height}"

frame_count = 0

# Main loop
loop do
  M5.update()

  # Update ball position
  ball_x += ball_vx
  ball_y += ball_vy

  # Bounce off walls
  if ball_x - ball_radius <= 0 || ball_x + ball_radius >= width
    ball_vx = -ball_vx
    ball_color = rand(0xFFFF)  # Change color on bounce
  end

  if ball_y - ball_radius <= 0 || ball_y + ball_radius >= height
    ball_vy = -ball_vy
    ball_color = rand(0xFFFF)  # Change color on bounce
  end

  # Draw frame
  M5.Display.start_write()

  # Clear screen with fade effect
  M5.Display.fill_screen(0x0000)

  # Draw ball
  M5.Display.fill_circle(ball_x, ball_y, ball_radius, ball_color)

  # Draw trailing circles for effect
  3.times do |i|
    trail_radius = ball_radius - (i * 3)
    trail_color = ball_color >> (i + 1)  # Fade color
    M5.Display.draw_circle(ball_x - (ball_vx * i), ball_y - (ball_vy * i), trail_radius, trail_color)
  end

  # Draw frame counter
  M5.Display.set_text_color(0xFFFF, 0x0000)
  M5.Display.set_text_size(1)
  M5.Display.set_cursor(5, 5, 1)
  M5.Display.print("Frame: #{frame_count}")

  # Draw speed control instructions
  M5.Display.set_cursor(5, height - 15, 1)
  M5.Display.print("A:Faster B:Stop C:Slower")

  M5.Display.end_write()

  frame_count += 1

  # Button controls
  if M5.get_button(0).was_pressed()
    # Faster
    ball_vx = ball_vx * 1.5
    ball_vy = ball_vy * 1.5
    puts "Speed increased: vx=#{ball_vx}, vy=#{ball_vy}"
  end

  if M5.get_button(1).was_pressed()
    # Stop/Start
    if ball_vx == 0
      ball_vx = 3
      ball_vy = 2
      puts "Animation started"
    else
      ball_vx = 0
      ball_vy = 0
      puts "Animation stopped"
    end
  end

  if M5.get_button(2).was_pressed()
    # Slower
    ball_vx = ball_vx * 0.7
    ball_vy = ball_vy * 0.7
    puts "Speed decreased: vx=#{ball_vx}, vy=#{ball_vy}"
  end

  sleep(0.02)  # ~50 FPS
end
