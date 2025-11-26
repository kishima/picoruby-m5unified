/*
 * M5Unified mruby/c implementation - Common header
 *
 * This header is shared across all M5Unified implementation files.
 */

#ifndef PICORUBY_M5UNIFIED_IMPL_H
#define PICORUBY_M5UNIFIED_IMPL_H

#include <mrubyc.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Forward declarations for all method implementations
 * These are organized by category and implemented in separate .cpp files
 */

/* ============================================== */
/* M5Unified Core Methods (m5unified_core.c)     */
/* ============================================== */
void c_m5_unified_get_pin(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_button(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_display(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_display_count(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_add_display(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_display_index(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_set_primary_display(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_set_primary_display_type(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_set_log_display_index(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_set_log_display_type(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_update_msec(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_config_t(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_board(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_update(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_dsp(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_set_touch_button_height_by_ratio(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_set_touch_button_height(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_touch_button_height(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_unified_get_io_expander(mrbc_vm *vm, mrbc_value *v, int argc);

/* Initialization function for M5Unified core */
void mrbc_m5unified_core_init(struct VM *vm);

/* ============================================== */
/* M5GFX Drawing Methods (m5gfx_draw.c)          */
/* ============================================== */
void c_m5_gfx_draw_pixel(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_fast_v_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_fast_h_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_round_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_circle(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_ellipse(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_triangle(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_bezier(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_ellipse_arc(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_arc(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_circle_helper(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_gradient_h_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_gradient_v_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_gradient_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_smooth_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_wide_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_wedge_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_spot(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_gradient_spot(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_bitmap(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_x_bitmap(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_string(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_number(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_float(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_centre_string(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_center_string(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_right_string(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_draw_char(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_draw_init(struct VM *vm, mrbc_class *class_M5Gfx);

/* ============================================== */
/* M5GFX Fill Methods (m5gfx_fill.c)             */
/* ============================================== */
void c_m5_gfx_fill_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_round_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_circle(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_ellipse(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_triangle(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_ellipse_arc(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_arc(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_circle_helper(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_affine(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_gradient_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_smooth_round_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_smooth_circle(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_fill_screen(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_fill_init(struct VM *vm, mrbc_class *class_M5Gfx);

/* ============================================== */
/* M5GFX Text Methods (m5gfx_text.c)             */
/* ============================================== */
void c_m5_gfx_set_cursor(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_cursor_x(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_cursor_y(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_style(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_size(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_text_size_x(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_text_size_y(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_datum(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_text_datum(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_padding(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_text_padding(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_wrap(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_scroll(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_color(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_font_height(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_font_width(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_text_length(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_text_width(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_text_font(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_free_font(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_font(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_load_font(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_load_font_with_path(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_unload_font(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_show_font(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_print(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_print_number(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_println(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_printf(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_vprintf(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_text_init(struct VM *vm, mrbc_class *class_M5Gfx);

/* ============================================== */
/* M5GFX Color Methods (m5gfx_color.c)           */
/* ============================================== */
void c_m5_gfx_color16to8(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_color8to16(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_color16to24(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_color24to16(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_color(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_raw_color(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_raw_color(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_base_color(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_base_color(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_palette(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_palette_count(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_has_palette(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_color_init(struct VM *vm, mrbc_class *class_M5Gfx);

/* ============================================== */
/* M5GFX Image Methods (m5gfx_image.c)           */
/* ============================================== */
void c_m5_gfx_push_image(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_push_grayscale_image(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_push_grayscale_image_rotate_zoom(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_push_grayscale_image_affine(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_push_alpha_image(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_push_block(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_push_pixels(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_push_pixels_dma(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_read_rect_rgb(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_read_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_p(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_copy_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_scroll(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_image_init(struct VM *vm, mrbc_class *class_M5Gfx);

/* ============================================== */
/* M5GFX Display Control (m5gfx_display.c)       */
/* ============================================== */
void c_m5_gfx_get_rotation(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_rotation(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_color_depth(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_color_depth(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_color_converter(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_width(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_height(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_pivot(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_pivot_x(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_pivot_y(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_clip_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_clip_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_clear_clip_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_scroll_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_scroll_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_clear_scroll_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_clear(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_clear_display(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_display(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_wait_display(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_display_busy(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_auto_display(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_swap_bytes(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_swap_bytes(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_is_readable(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_is_epd(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_is_bus_shared(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_is_spi_shared(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_scan_line(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_display_init(struct VM *vm, mrbc_class *class_M5Gfx);

/* ============================================== */
/* M5GFX Low-level Methods (m5gfx_lowlevel.c)    */
/* ============================================== */
void c_m5_gfx_start_write(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_end_write(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_begin_transaction(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_end_transaction(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_start_count(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_window(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_addr_window(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_pixel(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_fast_v_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_fast_h_line(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_fill_rect(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_fill_rect_preclipped(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_color(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_pixels(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_write_pixels_dma(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_init_dma(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_wait_dma(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_dma_busy(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_lowlevel_init(struct VM *vm, mrbc_class *class_M5Gfx);

/* ============================================== */
/* M5GFX Utility Methods (m5gfx_util.c)          */
/* ============================================== */
void c_m5_gfx_flood_fill(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_paint(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_map_gradient(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_qrcode(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_file(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_create_png(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_release_png_memory(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_cp437(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_attribute(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_get_attribute(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_set_file_storage(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_clear_file_storage(mrbc_vm *vm, mrbc_value *v, int argc);
void c_m5_gfx_prepare_tmp_transaction(mrbc_vm *vm, mrbc_value *v, int argc);

void mrbc_m5gfx_util_init(struct VM *vm, mrbc_class *class_M5Gfx);

#ifdef __cplusplus
}
#endif

#endif /* PICORUBY_M5UNIFIED_IMPL_H */
