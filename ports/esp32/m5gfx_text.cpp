/* M5GFX Text Methods - mruby/c implementation */

#include <M5Unified.h>
#include "m5unified_impl.h"

extern "C" {

void c_m5_gfx_set_cursor(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_cursor_x(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_get_cursor_y(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_text_style(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_text_size(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_text_size_x(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_get_text_size_y(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_text_datum(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_text_datum(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_text_padding(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_text_padding(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_text_wrap(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_text_scroll(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_text_color(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_font_height(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_font_width(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_text_length(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_text_width(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_text_font(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_free_font(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_font(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_load_font(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_load_font_with_path(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_unload_font(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_show_font(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_print(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_print_number(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_println(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_printf(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_vprintf(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }

void mrbc_m5gfx_text_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "set_cursor", c_m5_gfx_set_cursor);
    mrbc_define_method(vm, class_M5Gfx, "get_cursor_x", c_m5_gfx_get_cursor_x);
    mrbc_define_method(vm, class_M5Gfx, "get_cursor_y", c_m5_gfx_get_cursor_y);
    mrbc_define_method(vm, class_M5Gfx, "set_text_style", c_m5_gfx_set_text_style);
    mrbc_define_method(vm, class_M5Gfx, "set_text_size", c_m5_gfx_set_text_size);
    mrbc_define_method(vm, class_M5Gfx, "get_text_size_x", c_m5_gfx_get_text_size_x);
    mrbc_define_method(vm, class_M5Gfx, "get_text_size_y", c_m5_gfx_get_text_size_y);
    mrbc_define_method(vm, class_M5Gfx, "set_text_datum", c_m5_gfx_set_text_datum);
    mrbc_define_method(vm, class_M5Gfx, "get_text_datum", c_m5_gfx_get_text_datum);
    mrbc_define_method(vm, class_M5Gfx, "set_text_padding", c_m5_gfx_set_text_padding);
    mrbc_define_method(vm, class_M5Gfx, "get_text_padding", c_m5_gfx_get_text_padding);
    mrbc_define_method(vm, class_M5Gfx, "set_text_wrap", c_m5_gfx_set_text_wrap);
    mrbc_define_method(vm, class_M5Gfx, "set_text_scroll", c_m5_gfx_set_text_scroll);
    mrbc_define_method(vm, class_M5Gfx, "set_text_color", c_m5_gfx_set_text_color);
    mrbc_define_method(vm, class_M5Gfx, "font_height", c_m5_gfx_font_height);
    mrbc_define_method(vm, class_M5Gfx, "font_width", c_m5_gfx_font_width);
    mrbc_define_method(vm, class_M5Gfx, "text_length", c_m5_gfx_text_length);
    mrbc_define_method(vm, class_M5Gfx, "text_width", c_m5_gfx_text_width);
    mrbc_define_method(vm, class_M5Gfx, "set_text_font", c_m5_gfx_set_text_font);
    mrbc_define_method(vm, class_M5Gfx, "set_free_font", c_m5_gfx_set_free_font);
    mrbc_define_method(vm, class_M5Gfx, "set_font", c_m5_gfx_set_font);
    mrbc_define_method(vm, class_M5Gfx, "load_font", c_m5_gfx_load_font);
    mrbc_define_method(vm, class_M5Gfx, "load_font_with_path", c_m5_gfx_load_font_with_path);
    mrbc_define_method(vm, class_M5Gfx, "unload_font", c_m5_gfx_unload_font);
    mrbc_define_method(vm, class_M5Gfx, "show_font", c_m5_gfx_show_font);
    mrbc_define_method(vm, class_M5Gfx, "print", c_m5_gfx_print);
    mrbc_define_method(vm, class_M5Gfx, "print_number", c_m5_gfx_print_number);
    mrbc_define_method(vm, class_M5Gfx, "println", c_m5_gfx_println);
    mrbc_define_method(vm, class_M5Gfx, "write", c_m5_gfx_write);
    mrbc_define_method(vm, class_M5Gfx, "printf", c_m5_gfx_printf);
    mrbc_define_method(vm, class_M5Gfx, "vprintf", c_m5_gfx_vprintf);
}

} // extern "C"
