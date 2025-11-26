/* M5GFX Display Control Methods - mruby/c implementation */

#include "m5unified_impl.h"

void c_m5_gfx_get_rotation(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_rotation(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_color_depth(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_color_depth(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_color_converter(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_width(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_height(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_pivot(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_pivot_x(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_get_pivot_y(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_clip_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_clip_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_clear_clip_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_scroll_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_scroll_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_clear_scroll_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_clear(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_clear_display(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_display(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_wait_display(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_display_busy(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_auto_display(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_swap_bytes(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_swap_bytes(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_is_readable(mrbc_vm *vm, mrbc_value *v, int argc) { SET_FALSE_RETURN(); }
void c_m5_gfx_is_epd(mrbc_vm *vm, mrbc_value *v, int argc) { SET_FALSE_RETURN(); }
void c_m5_gfx_is_bus_shared(mrbc_vm *vm, mrbc_value *v, int argc) { SET_FALSE_RETURN(); }
void c_m5_gfx_is_spi_shared(mrbc_vm *vm, mrbc_value *v, int argc) { SET_FALSE_RETURN(); }
void c_m5_gfx_get_scan_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }

void mrbc_m5gfx_display_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "get_rotation", c_m5_gfx_get_rotation);
    mrbc_define_method(vm, class_M5Gfx, "set_rotation", c_m5_gfx_set_rotation);
    mrbc_define_method(vm, class_M5Gfx, "get_color_depth", c_m5_gfx_get_color_depth);
    mrbc_define_method(vm, class_M5Gfx, "set_color_depth", c_m5_gfx_set_color_depth);
    mrbc_define_method(vm, class_M5Gfx, "get_color_converter", c_m5_gfx_get_color_converter);
    mrbc_define_method(vm, class_M5Gfx, "width", c_m5_gfx_width);
    mrbc_define_method(vm, class_M5Gfx, "height", c_m5_gfx_height);
    mrbc_define_method(vm, class_M5Gfx, "set_pivot", c_m5_gfx_set_pivot);
    mrbc_define_method(vm, class_M5Gfx, "get_pivot_x", c_m5_gfx_get_pivot_x);
    mrbc_define_method(vm, class_M5Gfx, "get_pivot_y", c_m5_gfx_get_pivot_y);
    mrbc_define_method(vm, class_M5Gfx, "set_clip_rect", c_m5_gfx_set_clip_rect);
    mrbc_define_method(vm, class_M5Gfx, "get_clip_rect", c_m5_gfx_get_clip_rect);
    mrbc_define_method(vm, class_M5Gfx, "clear_clip_rect", c_m5_gfx_clear_clip_rect);
    mrbc_define_method(vm, class_M5Gfx, "set_scroll_rect", c_m5_gfx_set_scroll_rect);
    mrbc_define_method(vm, class_M5Gfx, "get_scroll_rect", c_m5_gfx_get_scroll_rect);
    mrbc_define_method(vm, class_M5Gfx, "clear_scroll_rect", c_m5_gfx_clear_scroll_rect);
    mrbc_define_method(vm, class_M5Gfx, "clear", c_m5_gfx_clear);
    mrbc_define_method(vm, class_M5Gfx, "clear_display", c_m5_gfx_clear_display);
    mrbc_define_method(vm, class_M5Gfx, "display", c_m5_gfx_display);
    mrbc_define_method(vm, class_M5Gfx, "wait_display", c_m5_gfx_wait_display);
    mrbc_define_method(vm, class_M5Gfx, "display_busy", c_m5_gfx_display_busy);
    mrbc_define_method(vm, class_M5Gfx, "set_auto_display", c_m5_gfx_set_auto_display);
    mrbc_define_method(vm, class_M5Gfx, "get_swap_bytes", c_m5_gfx_get_swap_bytes);
    mrbc_define_method(vm, class_M5Gfx, "set_swap_bytes", c_m5_gfx_set_swap_bytes);
    mrbc_define_method(vm, class_M5Gfx, "is_readable", c_m5_gfx_is_readable);
    mrbc_define_method(vm, class_M5Gfx, "is_epd", c_m5_gfx_is_epd);
    mrbc_define_method(vm, class_M5Gfx, "is_bus_shared", c_m5_gfx_is_bus_shared);
    mrbc_define_method(vm, class_M5Gfx, "is_spi_shared", c_m5_gfx_is_spi_shared);
    mrbc_define_method(vm, class_M5Gfx, "get_scan_line", c_m5_gfx_get_scan_line);
}
