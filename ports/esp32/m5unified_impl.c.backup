/*
 * Auto-generated mruby C extension skeleton
 * Generated at: 2025-10-29 10:37:49 +0900
 * Source files: M5Unified.hpp, LGFXBase.hpp
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


/* Forward declarations */
static mrb_value mrb_m5_unified_get_pin(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_button(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_display(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_display_count(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_add_display(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_display_index(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_set_primary_display(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_set_primary_display_type(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_set_log_display_index(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_set_log_display_type(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_update_msec(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_config_t(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_board(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_update(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_dsp(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_set_touch_button_height_by_ratio(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_set_touch_button_height(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_touch_button_height(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_unified_get_io_expander(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_color16to8(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_color8to16(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_color16to24(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_color24to16(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_color(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_raw_color(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_raw_color(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_base_color(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_base_color(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_color_converter(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_color_depth(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_start_write(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_end_write(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_begin_transaction(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_end_transaction(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_start_count(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_window(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_pixel(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_fast_v_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_fast_h_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_fill_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_fill_rect_preclipped(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_color(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_block(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_pixel(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_fast_v_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_fast_h_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_round_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_round_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_circle(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_circle(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_ellipse(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_ellipse(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_triangle(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_triangle(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_bezier(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_ellipse_arc(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_ellipse_arc(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_arc(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_arc(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_circle_helper(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_circle_helper(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_flood_fill(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_paint(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_affine(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_gradient_h_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_gradient_v_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_gradient_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_map_gradient(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_smooth_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_wide_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_wedge_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_spot(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_gradient_spot(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_gradient_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_smooth_round_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_smooth_circle(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_fill_screen(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_clear(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_clear_display(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_pivot(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_pivot_x(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_pivot_y(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_width(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_height(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_has_palette(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_palette_count(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_palette(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_is_readable(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_is_epd(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_swap_bytes(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_swap_bytes(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_is_bus_shared(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_is_spi_shared(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_display(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_wait_display(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_display_busy(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_auto_display(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_init_dma(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_wait_dma(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_dma_busy(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_scroll_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_pixels(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write_pixels_dma(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_pixels(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_pixels_dma(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_bitmap(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_x_bitmap(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_scan_line(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_rotation(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_rotation(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_color_depth(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_addr_window(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_clip_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_clip_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_clear_clip_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_scroll_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_clear_scroll_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_image(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_grayscale_image(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_grayscale_image_rotate_zoom(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_grayscale_image_affine(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_push_alpha_image(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_read_rect_rgb(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_p(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_read_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_scroll(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_copy_rect(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_cursor(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_cursor_x(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_cursor_y(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_style(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_size(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_text_size_x(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_text_size_y(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_datum(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_text_datum(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_padding(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_text_padding(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_wrap(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_scroll(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_color(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_font_height(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_font_width(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_text_length(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_text_width(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_string(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_number(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_float(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_centre_string(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_center_string(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_right_string(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_draw_char(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_text_font(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_free_font(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_font(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_load_font(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_load_font_with_path(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_load_font(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_unload_font(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_show_font(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_cp437(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_attribute(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_get_attribute(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_set_file_storage(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_clear_file_storage(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_print(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_print_number(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_println(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_write(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_printf(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_vprintf(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_qrcode(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_file(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_create_png(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_release_png_memory(mrb_state *mrb, mrb_value self);
static mrb_value mrb_m5_gfx_prepare_tmp_transaction(mrb_state *mrb, mrb_value self);

/* ==============================================
 * Class: M5Unified
 * Namespace: m5::m5
 * File: M5Unified.hpp
 * ============================================== */

/*
 * Method: M5Unified.getPin
 * Return: int8_t
 * Params: pin_name_t name
 * Line: 250
 */
static mrb_value
mrb_m5_unified_get_pin(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value name;

    mrb_get_args(mrb, "o", &name);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: M5Unified.getButton
 * Return: Button_Class&
 * Params: size_t index
 * Line: 252
 */
static mrb_value
mrb_m5_unified_get_button(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value index;

    mrb_get_args(mrb, "o", &index);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: M5Unified.getDisplay
 * Return: M5GFX&
 * Params: size_t index
 * Line: 256
 */
static mrb_value
mrb_m5_unified_get_display(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value index;

    mrb_get_args(mrb, "o", &index);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: M5Unified.getDisplayCount
 * Return: std::size_t
 * Params: void 
 * Modifiers: const
 * Line: 260
 */
static mrb_value
mrb_m5_unified_get_display_count(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: M5Unified.addDisplay
 * Return: std::size_t
 * Params: M5GFX& dsp
 * Line: 262
 */
static mrb_value
mrb_m5_unified_add_display(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value dsp;

    mrb_get_args(mrb, "o", &dsp);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: M5Unified.getDisplayIndex
 * Return: int32_t
 * Params: m5gfx::board_t board
 * Line: 266
 */
static mrb_value
mrb_m5_unified_get_display_index(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value board;

    mrb_get_args(mrb, "o", &board);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: M5Unified.setPrimaryDisplay
 * Return: bool
 * Params: std::size_t index
 * Line: 271
 */
static mrb_value
mrb_m5_unified_set_primary_display(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value index;

    mrb_get_args(mrb, "o", &index);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: M5Unified.setPrimaryDisplayType
 * Return: bool
 * Params: std::initializer_list<m5gfx::board_t> board_list
 * Line: 275
 */
static mrb_value
mrb_m5_unified_set_primary_display_type(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value board_list;

    mrb_get_args(mrb, "o", &board_list);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: M5Unified.setLogDisplayIndex
 * Return: void
 * Params: size_t index
 * Line: 281
 */
static mrb_value
mrb_m5_unified_set_log_display_index(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value index;

    mrb_get_args(mrb, "o", &index);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: M5Unified.setLogDisplayType
 * Return: void
 * Params: std::initializer_list<m5gfx::board_t> board_list
 * Line: 283
 */
static mrb_value
mrb_m5_unified_set_log_display_type(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value board_list;

    mrb_get_args(mrb, "o", &board_list);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: M5Unified.getUpdateMsec
 * Return: std::uint32_t
 * Params: void 
 * Modifiers: const
 * Line: 288
 */
static mrb_value
mrb_m5_unified_get_update_msec(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: M5Unified.config_t
 * Return: return
 * Params: 
 * Line: 292
 */
static mrb_value
mrb_m5_unified_config_t(mrb_state *mrb, mrb_value self)
{
    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: M5Unified.getBoard
 * Return: board_t
 * Params: void 
 * Modifiers: const
 * Line: 316
 */
static mrb_value
mrb_m5_unified_get_board(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: M5Unified.update
 * Return: void
 * Params: void 
 * Line: 319
 */
static mrb_value
mrb_m5_unified_update(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: M5Unified.dsp
 * Return: M5AtomDisplay
 * Params: cfg.atom_display 
 * Line: 364
 */
static mrb_value
mrb_m5_unified_dsp(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: M5Unified.setTouchButtonHeightByRatio
 * Return: void
 * Params: uint8_t ratio
 * Line: 597
 */
static mrb_value
mrb_m5_unified_set_touch_button_height_by_ratio(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int ratio;

    mrb_get_args(mrb, "i", &ratio);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: M5Unified.setTouchButtonHeight
 * Return: void
 * Params: uint16_t pixel
 * Line: 598
 */
static mrb_value
mrb_m5_unified_set_touch_button_height(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int pixel;

    mrb_get_args(mrb, "i", &pixel);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: M5Unified.getTouchButtonHeight
 * Return: uint16_t
 * Params: void 
 * Modifiers: const
 * Line: 599
 */
static mrb_value
mrb_m5_unified_get_touch_button_height(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: M5Unified.getIOExpander
 * Return: IOExpander_Base&
 * Params: size_t idx
 * Line: 601
 */
static mrb_value
mrb_m5_unified_get_io_expander(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value idx;

    mrb_get_args(mrb, "o", &idx);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}


/* ==============================================
 * Class: LGFXBase
 * Namespace: lgfx
 * File: LGFXBase.hpp
 * ============================================== */

/*
 * Method: LGFXBase.color16to8
 * Return: uint8_t
 * Params: uint32_t rgb565
 * Line: 102
 */
static mrb_value
mrb_m5_gfx_color16to8(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int rgb565;

    mrb_get_args(mrb, "i", &rgb565);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.color8to16
 * Return: uint16_t
 * Params: uint32_t rgb332
 * Line: 106
 */
static mrb_value
mrb_m5_gfx_color8to16(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int rgb332;

    mrb_get_args(mrb, "i", &rgb332);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.color16to24
 * Return: uint32_t
 * Params: uint32_t rgb565
 * Line: 110
 */
static mrb_value
mrb_m5_gfx_color16to24(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int rgb565;

    mrb_get_args(mrb, "i", &rgb565);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.color24to16
 * Return: uint16_t
 * Params: uint32_t rgb888
 * Line: 114
 */
static mrb_value
mrb_m5_gfx_color24to16(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int rgb888;

    mrb_get_args(mrb, "i", &rgb888);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setColor
 * Return: void
 * Params: uint8_t r, uint8_t g, uint8_t b
 * Line: 120
 */
static mrb_value
mrb_m5_gfx_set_color(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int r;
    mrb_int g;
    mrb_int b;

    mrb_get_args(mrb, "iii", &r, &g, &b);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setRawColor
 * Return: void
 * Params: uint32_t c
 * Line: 124
 */
static mrb_value
mrb_m5_gfx_set_raw_color(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int c;

    mrb_get_args(mrb, "i", &c);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getRawColor
 * Return: uint32_t
 * Params: void 
 * Modifiers: const
 * Line: 125
 */
static mrb_value
mrb_m5_gfx_get_raw_color(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setBaseColor
 * Return: void
 * Params: T c
 * Line: 126
 */
static mrb_value
mrb_m5_gfx_set_base_color(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value c;

    mrb_get_args(mrb, "o", &c);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getBaseColor
 * Return: uint32_t
 * Params: void 
 * Modifiers: const
 * Line: 127
 */
static mrb_value
mrb_m5_gfx_get_base_color(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.getColorConverter
 * Return: color_conv_t*
 * Params: void 
 * Line: 128
 */
static mrb_value
mrb_m5_gfx_get_color_converter(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.getColorDepth
 * Return: color_depth_t
 * Params: void 
 * Modifiers: const
 * Line: 129
 */
static mrb_value
mrb_m5_gfx_get_color_depth(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.startWrite
 * Return: void
 * Params: bool transaction
 * Line: 137
 */
static mrb_value
mrb_m5_gfx_start_write(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_bool transaction;

    mrb_get_args(mrb, "b", &transaction);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.endWrite
 * Return: void
 * Params: void 
 * Line: 139
 */
static mrb_value
mrb_m5_gfx_end_write(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.beginTransaction
 * Return: void
 * Params: void 
 * Line: 140
 */
static mrb_value
mrb_m5_gfx_begin_transaction(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.endTransaction
 * Return: void
 * Params: void 
 * Line: 141
 */
static mrb_value
mrb_m5_gfx_end_transaction(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getStartCount
 * Return: uint32_t
 * Params: void 
 * Modifiers: const
 * Line: 142
 */
static mrb_value
mrb_m5_gfx_get_start_count(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setWindow
 * Return: void
 * Params: uint_fast16_t xs, uint_fast16_t ys, uint_fast16_t xe, uint_fast16_t ye
 * Line: 144
 */
static mrb_value
mrb_m5_gfx_set_window(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int xs;
    mrb_int ys;
    mrb_int xe;
    mrb_int ye;

    mrb_get_args(mrb, "iiii", &xs, &ys, &xe, &ye);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writePixel
 * Return: void
 * Params: int32_t x, int32_t y, const T& color
 * Line: 146
 */
static mrb_value
mrb_m5_gfx_write_pixel(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_value color;

    mrb_get_args(mrb, "iio", &x, &y, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writeFastVLine
 * Return: void
 * Params: int32_t x, int32_t y, int32_t h, const T& color
 * Line: 147
 */
static mrb_value
mrb_m5_gfx_write_fast_v_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "iiio", &x, &y, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writeFastHLine
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, const T& color
 * Line: 149
 */
static mrb_value
mrb_m5_gfx_write_fast_h_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_value color;

    mrb_get_args(mrb, "iiio", &x, &y, &w, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writeFillRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, const T& color
 * Line: 151
 */
static mrb_value
mrb_m5_gfx_write_fill_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &w, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writeFillRectPreclipped
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, const T& color
 * Line: 153
 */
static mrb_value
mrb_m5_gfx_write_fill_rect_preclipped(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &w, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writeColor
 * Return: void
 * Params: const T& color, uint32_t length
 * Line: 155
 */
static mrb_value
mrb_m5_gfx_write_color(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value color;
    mrb_int length;

    mrb_get_args(mrb, "oi", &color, &length);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushBlock
 * Return: void
 * Params: const T& color, uint32_t length
 * Line: 156
 */
static mrb_value
mrb_m5_gfx_push_block(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value color;
    mrb_int length;

    mrb_get_args(mrb, "oi", &color, &length);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawPixel
 * Return: void
 * Params: int32_t x, int32_t y, const T& color
 * Line: 167
 */
static mrb_value
mrb_m5_gfx_draw_pixel(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_value color;

    mrb_get_args(mrb, "iio", &x, &y, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawFastVLine
 * Return: void
 * Params: int32_t x, int32_t y, int32_t h, const T& color
 * Line: 173
 */
static mrb_value
mrb_m5_gfx_draw_fast_v_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "iiio", &x, &y, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawFastHLine
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, const T& color
 * Line: 185
 */
static mrb_value
mrb_m5_gfx_draw_fast_h_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_value color;

    mrb_get_args(mrb, "iiio", &x, &y, &w, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, const T& color
 * Line: 198
 */
static mrb_value
mrb_m5_gfx_fill_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &w, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, const T& color
 * Line: 212
 */
static mrb_value
mrb_m5_gfx_draw_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &w, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawRoundRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, const T& color
 * Line: 220
 */
static mrb_value
mrb_m5_gfx_draw_round_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_int r;
    mrb_value color;

    mrb_get_args(mrb, "iiiiio", &x, &y, &w, &h, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillRoundRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, const T& color
 * Line: 222
 */
static mrb_value
mrb_m5_gfx_fill_round_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_int r;
    mrb_value color;

    mrb_get_args(mrb, "iiiiio", &x, &y, &w, &h, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawCircle
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r, const T& color
 * Line: 224
 */
static mrb_value
mrb_m5_gfx_draw_circle(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r;
    mrb_value color;

    mrb_get_args(mrb, "iiio", &x, &y, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillCircle
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r, const T& color
 * Line: 226
 */
static mrb_value
mrb_m5_gfx_fill_circle(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r;
    mrb_value color;

    mrb_get_args(mrb, "iiio", &x, &y, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawEllipse
 * Return: void
 * Params: int32_t x, int32_t y, int32_t rx, int32_t ry, const T& color
 * Line: 228
 */
static mrb_value
mrb_m5_gfx_draw_ellipse(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int rx;
    mrb_int ry;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &rx, &ry, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillEllipse
 * Return: void
 * Params: int32_t x, int32_t y, int32_t rx, int32_t ry, const T& color
 * Line: 230
 */
static mrb_value
mrb_m5_gfx_fill_ellipse(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int rx;
    mrb_int ry;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &rx, &ry, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawLine
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, const T& color
 * Line: 232
 */
static mrb_value
mrb_m5_gfx_draw_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x0, &y0, &x1, &y1, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawTriangle
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, const T& color
 * Line: 234
 */
static mrb_value
mrb_m5_gfx_draw_triangle(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_int x2;
    mrb_int y2;
    mrb_value color;

    mrb_get_args(mrb, "iiiiiio", &x0, &y0, &x1, &y1, &x2, &y2, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillTriangle
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, const T& color
 * Line: 236
 */
static mrb_value
mrb_m5_gfx_fill_triangle(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_int x2;
    mrb_int y2;
    mrb_value color;

    mrb_get_args(mrb, "iiiiiio", &x0, &y0, &x1, &y1, &x2, &y2, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawBezier
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, const T& color
 * Line: 240
 */
static mrb_value
mrb_m5_gfx_draw_bezier(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_int x2;
    mrb_int y2;
    mrb_int x3;
    mrb_int y3;
    mrb_value color;

    mrb_get_args(mrb, "iiiiiiiio", &x0, &y0, &x1, &y1, &x2, &y2, &x3, &y3, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawEllipseArc
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r0x, int32_t r1x, int32_t r0y, int32_t r1y, float angle0, float angle1, const T& color
 * Line: 242
 */
static mrb_value
mrb_m5_gfx_draw_ellipse_arc(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r0x;
    mrb_int r1x;
    mrb_int r0y;
    mrb_int r1y;
    mrb_float angle0;
    mrb_float angle1;
    mrb_value color;

    mrb_get_args(mrb, "iiiiiiffo", &x, &y, &r0x, &r1x, &r0y, &r1y, &angle0, &angle1, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillEllipseArc
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r0x, int32_t r1x, int32_t r0y, int32_t r1y, float angle0, float angle1, const T& color
 * Line: 244
 */
static mrb_value
mrb_m5_gfx_fill_ellipse_arc(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r0x;
    mrb_int r1x;
    mrb_int r0y;
    mrb_int r1y;
    mrb_float angle0;
    mrb_float angle1;
    mrb_value color;

    mrb_get_args(mrb, "iiiiiiffo", &x, &y, &r0x, &r1x, &r0y, &r1y, &angle0, &angle1, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawArc
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r0, int32_t r1, float angle0, float angle1, const T& color
 * Line: 246
 */
static mrb_value
mrb_m5_gfx_draw_arc(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r0;
    mrb_int r1;
    mrb_float angle0;
    mrb_float angle1;
    mrb_value color;

    mrb_get_args(mrb, "iiiiffo", &x, &y, &r0, &r1, &angle0, &angle1, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillArc
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r0, int32_t r1, float angle0, float angle1, const T& color
 * Line: 248
 */
static mrb_value
mrb_m5_gfx_fill_arc(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r0;
    mrb_int r1;
    mrb_float angle0;
    mrb_float angle1;
    mrb_value color;

    mrb_get_args(mrb, "iiiiffo", &x, &y, &r0, &r1, &angle0, &angle1, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawCircleHelper
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r, uint_fast8_t cornername, const T& color
 * Line: 250
 */
static mrb_value
mrb_m5_gfx_draw_circle_helper(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r;
    mrb_int cornername;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &r, &cornername, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillCircleHelper
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r, uint_fast8_t corners, int32_t delta, const T& color
 * Line: 252
 */
static mrb_value
mrb_m5_gfx_fill_circle_helper(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r;
    mrb_int corners;
    mrb_int delta;
    mrb_value color;

    mrb_get_args(mrb, "iiiiio", &x, &y, &r, &corners, &delta, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.floodFill
 * Return: void
 * Params: int32_t x, int32_t y, const T& color
 * Line: 254
 */
static mrb_value
mrb_m5_gfx_flood_fill(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_value color;

    mrb_get_args(mrb, "iio", &x, &y, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.paint
 * Return: void
 * Params: int32_t x, int32_t y, const T& color
 * Line: 256
 */
static mrb_value
mrb_m5_gfx_paint(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_value color;

    mrb_get_args(mrb, "iio", &x, &y, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillAffine
 * Return: void
 * Params: const float matrix[6], int32_t w, int32_t h, const T& color
 * Line: 259
 */
static mrb_value
mrb_m5_gfx_fill_affine(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_float matrix_6_;
    mrb_int w;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "fiio", &matrix_6_, &w, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawGradientHLine
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, const T& colorstart, const T& colorend
 * Line: 262
 */
static mrb_value
mrb_m5_gfx_draw_gradient_h_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_value colorstart;
    mrb_value colorend;

    mrb_get_args(mrb, "iiioo", &x, &y, &w, &colorstart, &colorend);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawGradientVLine
 * Return: void
 * Params: int32_t x, int32_t y, int32_t h, const T& colorstart, const T& colorend
 * Line: 263
 */
static mrb_value
mrb_m5_gfx_draw_gradient_v_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int h;
    mrb_value colorstart;
    mrb_value colorend;

    mrb_get_args(mrb, "iiioo", &x, &y, &h, &colorstart, &colorend);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawGradientLine
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, const T& colorstart, const T& colorend
 * Line: 264
 */
static mrb_value
mrb_m5_gfx_draw_gradient_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_value colorstart;
    mrb_value colorend;

    mrb_get_args(mrb, "iiiioo", &x0, &y0, &x1, &y1, &colorstart, &colorend);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.mapGradient
 * Return: T
 * Params: float val, float min, double max, const rgb888_t *colors, uint32_t count
 * Line: 275
 */
static mrb_value
mrb_m5_gfx_map_gradient(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_float val;
    mrb_float min;
    mrb_float max;
    mrb_value _colors;
    mrb_int count;

    mrb_get_args(mrb, "fffoi", &val, &min, &max, &_colors, &count);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.drawSmoothLine
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, const T& color
 * Line: 277
 */
static mrb_value
mrb_m5_gfx_draw_smooth_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x0, &y0, &x1, &y1, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawWideLine
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, float r, const T& color
 * Line: 279
 */
static mrb_value
mrb_m5_gfx_draw_wide_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_float r;
    mrb_value color;

    mrb_get_args(mrb, "iiiifo", &x0, &y0, &x1, &y1, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawWedgeLine
 * Return: void
 * Params: int32_t x0, int32_t y0, int32_t x1, int32_t y1, float r0, float r1, const T& color
 * Line: 281
 */
static mrb_value
mrb_m5_gfx_draw_wedge_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x0;
    mrb_int y0;
    mrb_int x1;
    mrb_int y1;
    mrb_float r0;
    mrb_float r1;
    mrb_value color;

    mrb_get_args(mrb, "iiiiffo", &x0, &y0, &x1, &y1, &r0, &r1, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawSpot
 * Return: void
 * Params: int32_t x, int32_t y, float r, const T& color
 * Line: 283
 */
static mrb_value
mrb_m5_gfx_draw_spot(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_float r;
    mrb_value color;

    mrb_get_args(mrb, "iifo", &x, &y, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawGradientSpot
 * Return: void
 * Params: int32_t x, int32_t y, float r, const colors_t gr
 * Line: 284
 */
static mrb_value
mrb_m5_gfx_draw_gradient_spot(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_float r;
    mrb_value gr;

    mrb_get_args(mrb, "iifo", &x, &y, &r, &gr);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillGradientRect
 * Return: void
 * Params: int32_t x, int32_t y, uint32_t w, uint32_t h, const T& start, const T& end, fill_style_t style
 * Line: 288
 */
static mrb_value
mrb_m5_gfx_fill_gradient_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value start;
    mrb_value end;
    mrb_value style;

    mrb_get_args(mrb, "iiiiooo", &x, &y, &w, &h, &start, &end, &style);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillSmoothRoundRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, const T& color
 * Line: 293
 */
static mrb_value
mrb_m5_gfx_fill_smooth_round_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_int r;
    mrb_value color;

    mrb_get_args(mrb, "iiiiio", &x, &y, &w, &h, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillSmoothCircle
 * Return: void
 * Params: int32_t x, int32_t y, int32_t r, const T& color
 * Line: 296
 */
static mrb_value
mrb_m5_gfx_fill_smooth_circle(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int r;
    mrb_value color;

    mrb_get_args(mrb, "iiio", &x, &y, &r, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fillScreen
 * Return: void
 * Params: const T& color
 * Line: 299
 */
static mrb_value
mrb_m5_gfx_fill_screen(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value color;

    mrb_get_args(mrb, "o", &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.clear
 * Return: void
 * Params: const T& color
 * Line: 302
 */
static mrb_value
mrb_m5_gfx_clear(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value color;

    mrb_get_args(mrb, "o", &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.clearDisplay
 * Return: void
 * Params: const T& color
 * Line: 304
 */
static mrb_value
mrb_m5_gfx_clear_display(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value color;

    mrb_get_args(mrb, "o", &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setPivot
 * Return: void
 * Params: float x, float y
 * Line: 307
 */
static mrb_value
mrb_m5_gfx_set_pivot(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_float x;
    mrb_float y;

    mrb_get_args(mrb, "ff", &x, &y);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getPivotX
 * Return: float
 * Params: void 
 * Modifiers: const
 * Line: 308
 */
static mrb_value
mrb_m5_gfx_get_pivot_x(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_float_value(mrb, 0.0); // TODO: return actual value
}

/*
 * Method: LGFXBase.getPivotY
 * Return: float
 * Params: void 
 * Modifiers: const
 * Line: 309
 */
static mrb_value
mrb_m5_gfx_get_pivot_y(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_float_value(mrb, 0.0); // TODO: return actual value
}

/*
 * Method: LGFXBase.width
 * Return: int32_t
 * Params: void 
 * Modifiers: const
 * Line: 311
 */
static mrb_value
mrb_m5_gfx_width(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.height
 * Return: int32_t
 * Params: void 
 * Modifiers: const
 * Line: 312
 */
static mrb_value
mrb_m5_gfx_height(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.hasPalette
 * Return: bool
 * Params: void 
 * Modifiers: const
 * Line: 313
 */
static mrb_value
mrb_m5_gfx_has_palette(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.getPaletteCount
 * Return: uint32_t
 * Params: void 
 * Modifiers: const
 * Line: 314
 */
static mrb_value
mrb_m5_gfx_get_palette_count(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.getPalette
 * Return: RGBColor*
 * Params: void 
 * Modifiers: const
 * Line: 315
 */
static mrb_value
mrb_m5_gfx_get_palette(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.isReadable
 * Return: bool
 * Params: void 
 * Modifiers: const
 * Line: 316
 */
static mrb_value
mrb_m5_gfx_is_readable(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.isEPD
 * Return: bool
 * Params: void 
 * Modifiers: const
 * Line: 317
 */
static mrb_value
mrb_m5_gfx_is_epd(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.getSwapBytes
 * Return: bool
 * Params: void 
 * Modifiers: const
 * Line: 318
 */
static mrb_value
mrb_m5_gfx_get_swap_bytes(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.setSwapBytes
 * Return: void
 * Params: bool swap
 * Line: 319
 */
static mrb_value
mrb_m5_gfx_set_swap_bytes(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_bool swap;

    mrb_get_args(mrb, "b", &swap);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.isBusShared
 * Return: bool
 * Params: void 
 * Modifiers: const
 * Line: 320
 */
static mrb_value
mrb_m5_gfx_is_bus_shared(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.isSPIShared
 * Return: bool
 * Params: void 
 * Modifiers: const
 * Line: 322
 */
static mrb_value
mrb_m5_gfx_is_spi_shared(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.display
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h
 * Line: 323
 */
static mrb_value
mrb_m5_gfx_display(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;

    mrb_get_args(mrb, "iiii", &x, &y, &w, &h);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.waitDisplay
 * Return: void
 * Params: void 
 * Line: 325
 */
static mrb_value
mrb_m5_gfx_wait_display(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.displayBusy
 * Return: bool
 * Params: void 
 * Line: 326
 */
static mrb_value
mrb_m5_gfx_display_busy(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.setAutoDisplay
 * Return: void
 * Params: bool flg
 * Line: 327
 */
static mrb_value
mrb_m5_gfx_set_auto_display(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_bool flg;

    mrb_get_args(mrb, "b", &flg);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.initDMA
 * Return: void
 * Params: void 
 * Line: 328
 */
static mrb_value
mrb_m5_gfx_init_dma(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.waitDMA
 * Return: void
 * Params: void 
 * Line: 329
 */
static mrb_value
mrb_m5_gfx_wait_dma(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.dmaBusy
 * Return: bool
 * Params: void 
 * Line: 330
 */
static mrb_value
mrb_m5_gfx_dma_busy(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.setScrollRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, const T& color
 * Line: 332
 */
static mrb_value
mrb_m5_gfx_set_scroll_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value color;

    mrb_get_args(mrb, "iiiio", &x, &y, &w, &h, &color);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writePixels
 * Return: void
 * Params: const uint16_t* data, int32_t len, bool swap
 * Line: 335
 */
static mrb_value
mrb_m5_gfx_write_pixels(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int data;
    mrb_int len;
    mrb_bool swap;

    mrb_get_args(mrb, "iib", &data, &len, &swap);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.writePixelsDMA
 * Return: void
 * Params: const uint16_t* data, int32_t len, bool swap
 * Line: 339
 */
static mrb_value
mrb_m5_gfx_write_pixels_dma(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int data;
    mrb_int len;
    mrb_bool swap;

    mrb_get_args(mrb, "iib", &data, &len, &swap);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushPixels
 * Return: void
 * Params: const uint16_t* data, int32_t len, bool swap
 * Line: 343
 */
static mrb_value
mrb_m5_gfx_push_pixels(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int data;
    mrb_int len;
    mrb_bool swap;

    mrb_get_args(mrb, "iib", &data, &len, &swap);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushPixelsDMA
 * Return: void
 * Params: const uint16_t* data, int32_t len, bool swap
 * Line: 347
 */
static mrb_value
mrb_m5_gfx_push_pixels_dma(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int data;
    mrb_int len;
    mrb_bool swap;

    mrb_get_args(mrb, "iib", &data, &len, &swap);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawBitmap
 * Return: void
 * Params: int32_t x, int32_t y, const uint8_t* bitmap, int32_t w, int32_t h, const T& fgcolor, const T& bgcolor
 * Line: 365
 */
static mrb_value
mrb_m5_gfx_draw_bitmap(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int bitmap;
    mrb_int w;
    mrb_int h;
    mrb_value fgcolor;
    mrb_value bgcolor;

    mrb_get_args(mrb, "iiiiioo", &x, &y, &bitmap, &w, &h, &fgcolor, &bgcolor);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.drawXBitmap
 * Return: void
 * Params: int32_t x, int32_t y, const uint8_t* bitmap, int32_t w, int32_t h, const T& fgcolor, const T& bgcolor
 * Line: 367
 */
static mrb_value
mrb_m5_gfx_draw_x_bitmap(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int bitmap;
    mrb_int w;
    mrb_int h;
    mrb_value fgcolor;
    mrb_value bgcolor;

    mrb_get_args(mrb, "iiiiioo", &x, &y, &bitmap, &w, &h, &fgcolor, &bgcolor);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getScanLine
 * Return: int32_t
 * Params: void 
 * Line: 382
 */
static mrb_value
mrb_m5_gfx_get_scan_line(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.getRotation
 * Return: uint8_t
 * Params: void 
 * Modifiers: const
 * Line: 384
 */
static mrb_value
mrb_m5_gfx_get_rotation(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setRotation
 * Return: void
 * Params: uint_fast8_t rotation
 * Line: 385
 */
static mrb_value
mrb_m5_gfx_set_rotation(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int rotation;

    mrb_get_args(mrb, "i", &rotation);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setColorDepth
 * Return: void
 * Params: int bits
 * Line: 386
 */
static mrb_value
mrb_m5_gfx_set_color_depth(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int bits;

    mrb_get_args(mrb, "i", &bits);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setAddrWindow
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h
 * Line: 389
 */
static mrb_value
mrb_m5_gfx_set_addr_window(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;

    mrb_get_args(mrb, "iiii", &x, &y, &w, &h);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setClipRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h
 * Line: 391
 */
static mrb_value
mrb_m5_gfx_set_clip_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;

    mrb_get_args(mrb, "iiii", &x, &y, &w, &h);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getClipRect
 * Return: void
 * Params: int32_t *x, int32_t *y, int32_t *w, int32_t *h
 * Line: 392
 */
static mrb_value
mrb_m5_gfx_get_clip_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int _x;
    mrb_int _y;
    mrb_int _w;
    mrb_int _h;

    mrb_get_args(mrb, "iiii", &_x, &_y, &_w, &_h);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.clearClipRect
 * Return: void
 * Params: void 
 * Line: 393
 */
static mrb_value
mrb_m5_gfx_clear_clip_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getScrollRect
 * Return: void
 * Params: int32_t *x, int32_t *y, int32_t *w, int32_t *h
 * Line: 396
 */
static mrb_value
mrb_m5_gfx_get_scroll_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int _x;
    mrb_int _y;
    mrb_int _w;
    mrb_int _h;

    mrb_get_args(mrb, "iiii", &_x, &_y, &_w, &_h);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.clearScrollRect
 * Return: void
 * Params: void 
 * Line: 397
 */
static mrb_value
mrb_m5_gfx_clear_scroll_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushImage
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, pixelcopy_t *param, bool use_dma
 * Line: 441
 */
static mrb_value
mrb_m5_gfx_push_image(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value _param;
    mrb_bool use_dma;

    mrb_get_args(mrb, "iiiiob", &x, &y, &w, &h, &_param, &use_dma);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushGrayscaleImage
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, const uint8_t* image, color_depth_t depth, const T& forecolor, const T& backcolor
 * Line: 563
 */
static mrb_value
mrb_m5_gfx_push_grayscale_image(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_int image;
    mrb_value depth;
    mrb_value forecolor;
    mrb_value backcolor;

    mrb_get_args(mrb, "iiiiiooo", &x, &y, &w, &h, &image, &depth, &forecolor, &backcolor);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushGrayscaleImageRotateZoom
 * Return: void
 * Params: float dst_x, float dst_y, float src_x, float src_y, float angle, float zoom_x, float zoom_y, int32_t w, int32_t h, const uint8_t* image, color_depth_t depth, const T& forecolor, const T& backcolor
 * Line: 564
 */
static mrb_value
mrb_m5_gfx_push_grayscale_image_rotate_zoom(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_float dst_x;
    mrb_float dst_y;
    mrb_float src_x;
    mrb_float src_y;
    mrb_float angle;
    mrb_float zoom_x;
    mrb_float zoom_y;
    mrb_int w;
    mrb_int h;
    mrb_int image;
    mrb_value depth;
    mrb_value forecolor;
    mrb_value backcolor;

    mrb_get_args(mrb, "fffffffiiiooo", &dst_x, &dst_y, &src_x, &src_y, &angle, &zoom_x, &zoom_y, &w, &h, &image, &depth, &forecolor, &backcolor);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushGrayscaleImageAffine
 * Return: void
 * Params: const float matrix[6], int32_t w, int32_t h, const uint8_t* image, color_depth_t depth, const T& forecolor, const T& backcolor
 * Line: 565
 */
static mrb_value
mrb_m5_gfx_push_grayscale_image_affine(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_float matrix_6_;
    mrb_int w;
    mrb_int h;
    mrb_int image;
    mrb_value depth;
    mrb_value forecolor;
    mrb_value backcolor;

    mrb_get_args(mrb, "fiiiooo", &matrix_6_, &w, &h, &image, &depth, &forecolor, &backcolor);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.pushAlphaImage
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, pixelcopy_t *param
 * Line: 594
 */
static mrb_value
mrb_m5_gfx_push_alpha_image(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_value _param;

    mrb_get_args(mrb, "iiiio", &x, &y, &w, &h, &_param);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.readRectRGB
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, uint8_t* data
 * Line: 625
 */
static mrb_value
mrb_m5_gfx_read_rect_rgb(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_int data;

    mrb_get_args(mrb, "iiiii", &x, &y, &w, &h, &data);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.p
 * Return: pixelcopy_t
 * Params: nullptr , get_depth<T>::value , _read_conv.depth , false , src_palette 
 * Line: 636
 */
static mrb_value
mrb_m5_gfx_p(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;
    mrb_value arg1;
    mrb_value arg2;
    mrb_value arg3;
    mrb_value arg4;

    mrb_get_args(mrb, "ooooo", &arg0, &arg1, &arg2, &arg3, &arg4);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.readRect
 * Return: void
 * Params: int32_t x, int32_t y, int32_t w, int32_t h, uint8_t* data
 * Line: 652
 */
static mrb_value
mrb_m5_gfx_read_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int w;
    mrb_int h;
    mrb_int data;

    mrb_get_args(mrb, "iiiii", &x, &y, &w, &h, &data);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.scroll
 * Return: void
 * Params: int_fast16_t dx, int_fast16_t dy
 * Line: 656
 */
static mrb_value
mrb_m5_gfx_scroll(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int dx;
    mrb_int dy;

    mrb_get_args(mrb, "ii", &dx, &dy);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.copyRect
 * Return: void
 * Params: int32_t dst_x, int32_t dst_y, int32_t w, int32_t h, int32_t src_x, int32_t src_y
 * Line: 657
 */
static mrb_value
mrb_m5_gfx_copy_rect(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int dst_x;
    mrb_int dst_y;
    mrb_int w;
    mrb_int h;
    mrb_int src_x;
    mrb_int src_y;

    mrb_get_args(mrb, "iiiiii", &dst_x, &dst_y, &w, &h, &src_x, &src_y);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setCursor
 * Return: void
 * Params: int32_t x, int32_t y, uint8_t font
 * Line: 661
 */
static mrb_value
mrb_m5_gfx_set_cursor(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int font;

    mrb_get_args(mrb, "iii", &x, &y, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getCursorX
 * Return: int32_t
 * Params: void 
 * Modifiers: const
 * Line: 664
 */
static mrb_value
mrb_m5_gfx_get_cursor_x(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.getCursorY
 * Return: int32_t
 * Params: void 
 * Modifiers: const
 * Line: 665
 */
static mrb_value
mrb_m5_gfx_get_cursor_y(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setTextStyle
 * Return: void
 * Params: const TextStyle& text_style
 * Line: 666
 */
static mrb_value
mrb_m5_gfx_set_text_style(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value text_style;

    mrb_get_args(mrb, "o", &text_style);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setTextSize
 * Return: void
 * Params: float sx, float sy
 * Line: 669
 */
static mrb_value
mrb_m5_gfx_set_text_size(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_float sx;
    mrb_float sy;

    mrb_get_args(mrb, "ff", &sx, &sy);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getTextSizeX
 * Return: float
 * Params: void 
 * Modifiers: const
 * Line: 670
 */
static mrb_value
mrb_m5_gfx_get_text_size_x(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_float_value(mrb, 0.0); // TODO: return actual value
}

/*
 * Method: LGFXBase.getTextSizeY
 * Return: float
 * Params: void 
 * Modifiers: const
 * Line: 671
 */
static mrb_value
mrb_m5_gfx_get_text_size_y(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_float_value(mrb, 0.0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setTextDatum
 * Return: void
 * Params: uint8_t datum
 * Line: 673
 */
static mrb_value
mrb_m5_gfx_set_text_datum(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int datum;

    mrb_get_args(mrb, "i", &datum);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getTextDatum
 * Return: textdatum_t
 * Params: void 
 * Modifiers: const
 * Line: 675
 */
static mrb_value
mrb_m5_gfx_get_text_datum(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.setTextPadding
 * Return: void
 * Params: uint32_t padding_x
 * Line: 676
 */
static mrb_value
mrb_m5_gfx_set_text_padding(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int padding_x;

    mrb_get_args(mrb, "i", &padding_x);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getTextPadding
 * Return: uint32_t
 * Params: void 
 * Modifiers: const
 * Line: 677
 */
static mrb_value
mrb_m5_gfx_get_text_padding(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setTextWrap
 * Return: void
 * Params: bool wrapX, bool wrapY
 * Line: 678
 */
static mrb_value
mrb_m5_gfx_set_text_wrap(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_bool wrapX;
    mrb_bool wrapY;

    mrb_get_args(mrb, "bb", &wrapX, &wrapY);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setTextScroll
 * Return: void
 * Params: bool scroll
 * Line: 679
 */
static mrb_value
mrb_m5_gfx_set_text_scroll(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_bool scroll;

    mrb_get_args(mrb, "b", &scroll);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setTextColor
 * Return: void
 * Params: T1 fgcolor, T2 bgcolor
 * Line: 686
 */
static mrb_value
mrb_m5_gfx_set_text_color(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value fgcolor;
    mrb_value bgcolor;

    mrb_get_args(mrb, "oo", &fgcolor, &bgcolor);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.fontHeight
 * Return: int32_t
 * Params: uint8_t font
 * Modifiers: const
 * Line: 697
 */
static mrb_value
mrb_m5_gfx_font_height(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int font;

    mrb_get_args(mrb, "i", &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.fontWidth
 * Return: int32_t
 * Params: uint8_t font
 * Modifiers: const
 * Line: 700
 */
static mrb_value
mrb_m5_gfx_font_width(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int font;

    mrb_get_args(mrb, "i", &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.textLength
 * Return: int32_t
 * Params: const char *string, int32_t width
 * Line: 703
 */
static mrb_value
mrb_m5_gfx_text_length(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _string;
    mrb_int width;

    mrb_get_args(mrb, "oi", &_string, &width);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.textWidth
 * Return: int32_t
 * Params: const char *string, const IFont* font
 * Line: 705
 */
static mrb_value
mrb_m5_gfx_text_width(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _string;
    mrb_value font;

    mrb_get_args(mrb, "oo", &_string, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.drawString
 * Return: size_t
 * Params: const char *string, int32_t x, int32_t y, uint8_t font
 * Line: 708
 */
static mrb_value
mrb_m5_gfx_draw_string(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _string;
    mrb_int x;
    mrb_int y;
    mrb_int font;

    mrb_get_args(mrb, "oiii", &_string, &x, &y, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.drawNumber
 * Return: size_t
 * Params: long long_num, int32_t poX, int32_t poY, uint8_t font
 * Line: 713
 */
static mrb_value
mrb_m5_gfx_draw_number(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value long_num;
    mrb_int poX;
    mrb_int poY;
    mrb_int font;

    mrb_get_args(mrb, "oiii", &long_num, &poX, &poY, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.drawFloat
 * Return: size_t
 * Params: float floatNumber, uint8_t dp, int32_t poX, int32_t poY, uint8_t font
 * Line: 718
 */
static mrb_value
mrb_m5_gfx_draw_float(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_float floatNumber;
    mrb_int dp;
    mrb_int poX;
    mrb_int poY;
    mrb_int font;

    mrb_get_args(mrb, "fiiii", &floatNumber, &dp, &poX, &poY, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.drawCentreString
 * Return: size_t
 * Params: const char *string, int32_t x, int32_t y, const IFont* font
 * Line: 725
 */
static mrb_value
mrb_m5_gfx_draw_centre_string(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _string;
    mrb_int x;
    mrb_int y;
    mrb_value font;

    mrb_get_args(mrb, "oiio", &_string, &x, &y, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.drawCenterString
 * Return: size_t
 * Params: const char *string, int32_t x, int32_t y, const IFont* font
 * Line: 726
 */
static mrb_value
mrb_m5_gfx_draw_center_string(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _string;
    mrb_int x;
    mrb_int y;
    mrb_value font;

    mrb_get_args(mrb, "oiio", &_string, &x, &y, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.drawRightString
 * Return: size_t
 * Params: const char *string, int32_t x, int32_t y, const IFont* font
 * Line: 727
 */
static mrb_value
mrb_m5_gfx_draw_right_string(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _string;
    mrb_int x;
    mrb_int y;
    mrb_value font;

    mrb_get_args(mrb, "oiio", &_string, &x, &y, &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.drawChar
 * Return: size_t
 * Params: int32_t x, int32_t y, uint16_t uniCode, T color, T bg, float size
 * Line: 757
 */
static mrb_value
mrb_m5_gfx_draw_char(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int x;
    mrb_int y;
    mrb_int uniCode;
    mrb_value color;
    mrb_value bg;
    mrb_float size;

    mrb_get_args(mrb, "iiioof", &x, &y, &uniCode, &color, &bg, &size);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setTextFont
 * Return: void
 * Params: const IFont* font
 * Line: 789
 */
static mrb_value
mrb_m5_gfx_set_text_font(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value font;

    mrb_get_args(mrb, "o", &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setFreeFont
 * Return: void
 * Params: const IFont* font
 * Line: 792
 */
static mrb_value
mrb_m5_gfx_set_free_font(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value font;

    mrb_get_args(mrb, "o", &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setFont
 * Return: void
 * Params: const IFont* font
 * Line: 796
 */
static mrb_value
mrb_m5_gfx_set_font(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value font;

    mrb_get_args(mrb, "o", &font);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.loadFont
 * Return: bool
 * Params: const uint8_t* array
 * Line: 799
 */
static mrb_value
mrb_m5_gfx_load_font(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int array;

    mrb_get_args(mrb, "i", &array);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_bool_value(false); // TODO: return actual value
}

/*
 * Method: LGFXBase.load_font_with_path
 * Return: return
 * Params: path 
 * Line: 806
 */
static mrb_value
mrb_m5_gfx_load_font_with_path(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.load_font
 * Return: return
 * Params: data 
 * Line: 820
 */
static mrb_value
mrb_m5_gfx_load_font(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.unloadFont
 * Return: void
 * Params: void 
 * Line: 824
 */
static mrb_value
mrb_m5_gfx_unload_font(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.showFont
 * Return: void
 * Params: uint32_t td
 * Line: 827
 */
static mrb_value
mrb_m5_gfx_show_font(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int td;

    mrb_get_args(mrb, "i", &td);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.cp437
 * Return: void
 * Params: bool enable
 * Line: 829
 */
static mrb_value
mrb_m5_gfx_cp437(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_bool enable;

    mrb_get_args(mrb, "b", &enable);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.setAttribute
 * Return: void
 * Params: attribute_t attr_id, uint8_t param
 * Line: 831
 */
static mrb_value
mrb_m5_gfx_set_attribute(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value attr_id;
    mrb_int param;

    mrb_get_args(mrb, "oi", &attr_id, &param);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.getAttribute
 * Return: uint8_t
 * Params: attribute_t attr_id
 * Line: 832
 */
static mrb_value
mrb_m5_gfx_get_attribute(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value attr_id;

    mrb_get_args(mrb, "o", &attr_id);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.setFileStorage
 * Return: void
 * Params: T& fs
 * Line: 836
 */
static mrb_value
mrb_m5_gfx_set_file_storage(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value fs;

    mrb_get_args(mrb, "o", &fs);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.clearFileStorage
 * Return: void
 * Params: void 
 * Line: 843
 */
static mrb_value
mrb_m5_gfx_clear_file_storage(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.print
 * Return: size_t
 * Params: int n, int base
 * Line: 852
 */
static mrb_value
mrb_m5_gfx_print(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int n;
    mrb_int base;

    mrb_get_args(mrb, "ii", &n, &base);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.printNumber
 * Return: return
 * Params: n , 10 
 * Line: 861
 */
static mrb_value
mrb_m5_gfx_print_number(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;
    mrb_value arg1;

    mrb_get_args(mrb, "oo", &arg0, &arg1);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.println
 * Return: size_t
 * Params: int n, int base
 * Line: 874
 */
static mrb_value
mrb_m5_gfx_println(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_int n;
    mrb_int base;

    mrb_get_args(mrb, "ii", &n, &base);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.write
 * Return: size_t
 * Params: const char *buf, size_t size
 * Line: 887
 */
static mrb_value
mrb_m5_gfx_write(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _buf;
    mrb_value size;

    mrb_get_args(mrb, "oo", &_buf, &size);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.printf
 * Return: size_t
 * Params: const char* format, ... 
 * Line: 896
 */
static mrb_value
mrb_m5_gfx_printf(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    const char *format;
    mrb_value arg1;

    mrb_get_args(mrb, "zo", &format, &arg1);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.vprintf
 * Return: size_t
 * Params: const char *format, va_list arg
 * Line: 902
 */
static mrb_value
mrb_m5_gfx_vprintf(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _format;
    mrb_value arg;

    mrb_get_args(mrb, "oo", &_format, &arg);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_fixnum_value(0); // TODO: return actual value
}

/*
 * Method: LGFXBase.qrcode
 * Return: void
 * Params: const char *string, int32_t x, int32_t y, int32_t width, uint8_t version, bool margin
 * Line: 910
 */
static mrb_value
mrb_m5_gfx_qrcode(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value _string;
    mrb_int x;
    mrb_int y;
    mrb_int width;
    mrb_int version;
    mrb_bool margin;

    mrb_get_args(mrb, "oiiiib", &_string, &x, &y, &width, &version, &margin);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.file
 * Return: DataWrapperT<T>
 * Params: &fs 
 * Line: 949
 */
static mrb_value
mrb_m5_gfx_file(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.createPng
 * Return: void*
 * Params: size_t* datalen, int32_t x, int32_t y, int32_t width, int32_t height
 * Line: 976
 */
static mrb_value
mrb_m5_gfx_create_png(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value datalen;
    mrb_int x;
    mrb_int y;
    mrb_int width;
    mrb_int height;

    mrb_get_args(mrb, "oiiii", &datalen, &x, &y, &width, &height);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value(); // TODO: return wrapped object
}

/*
 * Method: LGFXBase.releasePngMemory
 * Return: void
 * Params: void 
 * Line: 978
 */
static mrb_value
mrb_m5_gfx_release_png_memory(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value arg0;

    mrb_get_args(mrb, "o", &arg0);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}

/*
 * Method: LGFXBase.prepareTmpTransaction
 * Return: void
 * Params: DataWrapper* data
 * Line: 996
 */
static mrb_value
mrb_m5_gfx_prepare_tmp_transaction(mrb_state *mrb, mrb_value self)
{
    /* Extract parameters */
    mrb_value data;

    mrb_get_args(mrb, "o", &data);

    /* TODO: Implement C++ method call */
    /* Example:
     * // Get C++ object instance first
     */

    /* TODO: Convert return value to mrb_value */
    return mrb_nil_value();
}


/* ==============================================
 * Initialization function
 * ============================================== */

void
mrb_picoruby_m5unified_gem_init_impl(mrb_state *mrb)
{
    struct RClass *m5_module;
    struct RClass *class_M5Gfx;

    /* Define M5 module */
    m5_module = mrb_define_module(mrb, "M5");

    /* M5Unified methods as M5 module methods */
    mrb_define_module_function(mrb, m5_module, "get_pin", mrb_m5_unified_get_pin, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "get_button", mrb_m5_unified_get_button, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "get_display", mrb_m5_unified_get_display, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "get_display_count", mrb_m5_unified_get_display_count, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "add_display", mrb_m5_unified_add_display, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "get_display_index", mrb_m5_unified_get_display_index, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "set_primary_display", mrb_m5_unified_set_primary_display, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "set_primary_display_type", mrb_m5_unified_set_primary_display_type, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "set_log_display_index", mrb_m5_unified_set_log_display_index, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "set_log_display_type", mrb_m5_unified_set_log_display_type, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "get_update_msec", mrb_m5_unified_get_update_msec, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "config_t", mrb_m5_unified_config_t, MRB_ARGS_REQ(0));
    mrb_define_module_function(mrb, m5_module, "get_board", mrb_m5_unified_get_board, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "update", mrb_m5_unified_update, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "dsp", mrb_m5_unified_dsp, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "set_touch_button_height_by_ratio", mrb_m5_unified_set_touch_button_height_by_ratio, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "set_touch_button_height", mrb_m5_unified_set_touch_button_height, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "get_touch_button_height", mrb_m5_unified_get_touch_button_height, MRB_ARGS_REQ(1));
    mrb_define_module_function(mrb, m5_module, "get_io_expander", mrb_m5_unified_get_io_expander, MRB_ARGS_REQ(1));

    /* Define M5Gfx class */
    class_M5Gfx = mrb_define_class(mrb, "M5Gfx", mrb->object_class);

    mrb_define_method(mrb, class_M5Gfx, "color16to8", mrb_m5_gfx_color16to8, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "color8to16", mrb_m5_gfx_color8to16, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "color16to24", mrb_m5_gfx_color16to24, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "color24to16", mrb_m5_gfx_color24to16, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_color", mrb_m5_gfx_set_color, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "set_raw_color", mrb_m5_gfx_set_raw_color, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_raw_color", mrb_m5_gfx_get_raw_color, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_base_color", mrb_m5_gfx_set_base_color, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_base_color", mrb_m5_gfx_get_base_color, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_color_converter", mrb_m5_gfx_get_color_converter, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_color_depth", mrb_m5_gfx_get_color_depth, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "start_write", mrb_m5_gfx_start_write, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "end_write", mrb_m5_gfx_end_write, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "begin_transaction", mrb_m5_gfx_begin_transaction, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "end_transaction", mrb_m5_gfx_end_transaction, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_start_count", mrb_m5_gfx_get_start_count, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_window", mrb_m5_gfx_set_window, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "write_pixel", mrb_m5_gfx_write_pixel, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "write_fast_v_line", mrb_m5_gfx_write_fast_v_line, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "write_fast_h_line", mrb_m5_gfx_write_fast_h_line, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "write_fill_rect", mrb_m5_gfx_write_fill_rect, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "write_fill_rect_preclipped", mrb_m5_gfx_write_fill_rect_preclipped, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "write_color", mrb_m5_gfx_write_color, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "push_block", mrb_m5_gfx_push_block, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "draw_pixel", mrb_m5_gfx_draw_pixel, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "draw_fast_v_line", mrb_m5_gfx_draw_fast_v_line, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_fast_h_line", mrb_m5_gfx_draw_fast_h_line, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "fill_rect", mrb_m5_gfx_fill_rect, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_rect", mrb_m5_gfx_draw_rect, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_round_rect", mrb_m5_gfx_draw_round_rect, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "fill_round_rect", mrb_m5_gfx_fill_round_rect, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "draw_circle", mrb_m5_gfx_draw_circle, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "fill_circle", mrb_m5_gfx_fill_circle, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_ellipse", mrb_m5_gfx_draw_ellipse, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "fill_ellipse", mrb_m5_gfx_fill_ellipse, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_line", mrb_m5_gfx_draw_line, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_triangle", mrb_m5_gfx_draw_triangle, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "fill_triangle", mrb_m5_gfx_fill_triangle, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "draw_bezier", mrb_m5_gfx_draw_bezier, MRB_ARGS_REQ(9));
    mrb_define_method(mrb, class_M5Gfx, "draw_ellipse_arc", mrb_m5_gfx_draw_ellipse_arc, MRB_ARGS_REQ(9));
    mrb_define_method(mrb, class_M5Gfx, "fill_ellipse_arc", mrb_m5_gfx_fill_ellipse_arc, MRB_ARGS_REQ(9));
    mrb_define_method(mrb, class_M5Gfx, "draw_arc", mrb_m5_gfx_draw_arc, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "fill_arc", mrb_m5_gfx_fill_arc, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "draw_circle_helper", mrb_m5_gfx_draw_circle_helper, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "fill_circle_helper", mrb_m5_gfx_fill_circle_helper, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "flood_fill", mrb_m5_gfx_flood_fill, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "paint", mrb_m5_gfx_paint, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "fill_affine", mrb_m5_gfx_fill_affine, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_gradient_h_line", mrb_m5_gfx_draw_gradient_h_line, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_gradient_v_line", mrb_m5_gfx_draw_gradient_v_line, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_gradient_line", mrb_m5_gfx_draw_gradient_line, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "map_gradient", mrb_m5_gfx_map_gradient, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_smooth_line", mrb_m5_gfx_draw_smooth_line, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_wide_line", mrb_m5_gfx_draw_wide_line, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "draw_wedge_line", mrb_m5_gfx_draw_wedge_line, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "draw_spot", mrb_m5_gfx_draw_spot, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_gradient_spot", mrb_m5_gfx_draw_gradient_spot, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "fill_gradient_rect", mrb_m5_gfx_fill_gradient_rect, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "fill_smooth_round_rect", mrb_m5_gfx_fill_smooth_round_rect, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "fill_smooth_circle", mrb_m5_gfx_fill_smooth_circle, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "fill_screen", mrb_m5_gfx_fill_screen, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "clear", mrb_m5_gfx_clear, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "clear_display", mrb_m5_gfx_clear_display, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_pivot", mrb_m5_gfx_set_pivot, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "get_pivot_x", mrb_m5_gfx_get_pivot_x, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_pivot_y", mrb_m5_gfx_get_pivot_y, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "width", mrb_m5_gfx_width, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "height", mrb_m5_gfx_height, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "has_palette", mrb_m5_gfx_has_palette, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_palette_count", mrb_m5_gfx_get_palette_count, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_palette", mrb_m5_gfx_get_palette, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "is_readable", mrb_m5_gfx_is_readable, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "is_epd", mrb_m5_gfx_is_epd, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_swap_bytes", mrb_m5_gfx_get_swap_bytes, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_swap_bytes", mrb_m5_gfx_set_swap_bytes, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "is_bus_shared", mrb_m5_gfx_is_bus_shared, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "is_spi_shared", mrb_m5_gfx_is_spi_shared, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "display", mrb_m5_gfx_display, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "wait_display", mrb_m5_gfx_wait_display, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "display_busy", mrb_m5_gfx_display_busy, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_auto_display", mrb_m5_gfx_set_auto_display, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "init_dma", mrb_m5_gfx_init_dma, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "wait_dma", mrb_m5_gfx_wait_dma, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "dma_busy", mrb_m5_gfx_dma_busy, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_scroll_rect", mrb_m5_gfx_set_scroll_rect, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "write_pixels", mrb_m5_gfx_write_pixels, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "write_pixels_dma", mrb_m5_gfx_write_pixels_dma, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "push_pixels", mrb_m5_gfx_push_pixels, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "push_pixels_dma", mrb_m5_gfx_push_pixels_dma, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "draw_bitmap", mrb_m5_gfx_draw_bitmap, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "draw_x_bitmap", mrb_m5_gfx_draw_x_bitmap, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "get_scan_line", mrb_m5_gfx_get_scan_line, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_rotation", mrb_m5_gfx_get_rotation, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_rotation", mrb_m5_gfx_set_rotation, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_color_depth", mrb_m5_gfx_set_color_depth, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_addr_window", mrb_m5_gfx_set_addr_window, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "set_clip_rect", mrb_m5_gfx_set_clip_rect, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "get_clip_rect", mrb_m5_gfx_get_clip_rect, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "clear_clip_rect", mrb_m5_gfx_clear_clip_rect, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_scroll_rect", mrb_m5_gfx_get_scroll_rect, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "clear_scroll_rect", mrb_m5_gfx_clear_scroll_rect, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "push_image", mrb_m5_gfx_push_image, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "push_grayscale_image", mrb_m5_gfx_push_grayscale_image, MRB_ARGS_REQ(8));
    mrb_define_method(mrb, class_M5Gfx, "push_grayscale_image_rotate_zoom", mrb_m5_gfx_push_grayscale_image_rotate_zoom, MRB_ARGS_REQ(13));
    mrb_define_method(mrb, class_M5Gfx, "push_grayscale_image_affine", mrb_m5_gfx_push_grayscale_image_affine, MRB_ARGS_REQ(7));
    mrb_define_method(mrb, class_M5Gfx, "push_alpha_image", mrb_m5_gfx_push_alpha_image, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "read_rect_rgb", mrb_m5_gfx_read_rect_rgb, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "p", mrb_m5_gfx_p, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "read_rect", mrb_m5_gfx_read_rect, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "scroll", mrb_m5_gfx_scroll, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "copy_rect", mrb_m5_gfx_copy_rect, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "set_cursor", mrb_m5_gfx_set_cursor, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, class_M5Gfx, "get_cursor_x", mrb_m5_gfx_get_cursor_x, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_cursor_y", mrb_m5_gfx_get_cursor_y, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_text_style", mrb_m5_gfx_set_text_style, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_text_size", mrb_m5_gfx_set_text_size, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "get_text_size_x", mrb_m5_gfx_get_text_size_x, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_text_size_y", mrb_m5_gfx_get_text_size_y, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_text_datum", mrb_m5_gfx_set_text_datum, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_text_datum", mrb_m5_gfx_get_text_datum, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_text_padding", mrb_m5_gfx_set_text_padding, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "get_text_padding", mrb_m5_gfx_get_text_padding, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_text_wrap", mrb_m5_gfx_set_text_wrap, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "set_text_scroll", mrb_m5_gfx_set_text_scroll, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_text_color", mrb_m5_gfx_set_text_color, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "font_height", mrb_m5_gfx_font_height, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "font_width", mrb_m5_gfx_font_width, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "text_length", mrb_m5_gfx_text_length, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "text_width", mrb_m5_gfx_text_width, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "draw_string", mrb_m5_gfx_draw_string, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_number", mrb_m5_gfx_draw_number, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_float", mrb_m5_gfx_draw_float, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "draw_centre_string", mrb_m5_gfx_draw_centre_string, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_center_string", mrb_m5_gfx_draw_center_string, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_right_string", mrb_m5_gfx_draw_right_string, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, class_M5Gfx, "draw_char", mrb_m5_gfx_draw_char, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "set_text_font", mrb_m5_gfx_set_text_font, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_free_font", mrb_m5_gfx_set_free_font, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_font", mrb_m5_gfx_set_font, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "load_font", mrb_m5_gfx_load_font, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "load_font_with_path", mrb_m5_gfx_load_font_with_path, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "load_font", mrb_m5_gfx_load_font, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "unload_font", mrb_m5_gfx_unload_font, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "show_font", mrb_m5_gfx_show_font, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "cp437", mrb_m5_gfx_cp437, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_attribute", mrb_m5_gfx_set_attribute, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "get_attribute", mrb_m5_gfx_get_attribute, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "set_file_storage", mrb_m5_gfx_set_file_storage, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "clear_file_storage", mrb_m5_gfx_clear_file_storage, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "print", mrb_m5_gfx_print, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "print_number", mrb_m5_gfx_print_number, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "println", mrb_m5_gfx_println, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "write", mrb_m5_gfx_write, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "printf", mrb_m5_gfx_printf, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "vprintf", mrb_m5_gfx_vprintf, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, class_M5Gfx, "qrcode", mrb_m5_gfx_qrcode, MRB_ARGS_REQ(6));
    mrb_define_method(mrb, class_M5Gfx, "file", mrb_m5_gfx_file, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "create_png", mrb_m5_gfx_create_png, MRB_ARGS_REQ(5));
    mrb_define_method(mrb, class_M5Gfx, "release_png_memory", mrb_m5_gfx_release_png_memory, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, class_M5Gfx, "prepare_tmp_transaction", mrb_m5_gfx_prepare_tmp_transaction, MRB_ARGS_REQ(1));

    /* TODO: Initialize C++ objects */
    /* Example:
     * // Create global M5Unified instance
     * auto cfg = M5.config();
     * M5.begin(cfg);
     */

    /* TODO: Setup M5.Display accessor */
    /* Example:
     * // Wrap M5.Display as M5Gfx instance
     * mrb_define_module_function(mrb, m5_module, "Display", mrb_m5_get_display, MRB_ARGS_NONE());
     */
}