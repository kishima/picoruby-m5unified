/* M5GFX Drawing Methods - mruby/c implementation */

#include <M5Unified.h>
#include "m5unified_impl.h"

extern "C" {

void c_m5_gfx_draw_pixel(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 3) {
        int x = GET_INT_ARG(1);
        int y = GET_INT_ARG(2);
        uint32_t color = GET_INT_ARG(3);
        M5.Display.drawPixel(x, y, color);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_fast_v_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_fast_h_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }

void c_m5_gfx_draw_rect(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 5) {
        int x = GET_INT_ARG(1);
        int y = GET_INT_ARG(2);
        int w = GET_INT_ARG(3);
        int h = GET_INT_ARG(4);
        uint32_t color = GET_INT_ARG(5);
        M5.Display.drawRect(x, y, w, h, color);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_round_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }

void c_m5_gfx_draw_circle(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 4) {
        int x = GET_INT_ARG(1);
        int y = GET_INT_ARG(2);
        int r = GET_INT_ARG(3);
        uint32_t color = GET_INT_ARG(4);
        M5.Display.drawCircle(x, y, r, color);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_ellipse(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }

void c_m5_gfx_draw_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 5) {
        int x0 = GET_INT_ARG(1);
        int y0 = GET_INT_ARG(2);
        int x1 = GET_INT_ARG(3);
        int y1 = GET_INT_ARG(4);
        uint32_t color = GET_INT_ARG(5);
        M5.Display.drawLine(x0, y0, x1, y1, color);
    }
    SET_NIL_RETURN();
}
void c_m5_gfx_draw_triangle(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_bezier(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_ellipse_arc(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_arc(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_circle_helper(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_gradient_h_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_gradient_v_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_gradient_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_smooth_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_wide_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_wedge_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_spot(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_gradient_spot(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_bitmap(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_x_bitmap(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void
c_m5_gfx_draw_string(mrbc_vm *vm, mrbc_value *v, int argc)
{
    if (argc >= 3) {
        mrbc_value str_val = GET_ARG(1);
        if (str_val.tt == MRBC_TT_STRING) {
            const char *str = (const char *)str_val.string->data;
            int32_t x = GET_INT_ARG(2);
            int32_t y = GET_INT_ARG(3);
            M5.Display.drawString(str, x, y);
        }
    }
    SET_NIL_RETURN();
}

void
c_m5_gfx_draw_number(mrbc_vm *vm, mrbc_value *v, int argc)
{
    if (argc >= 3) {
        long number = GET_INT_ARG(1);
        int32_t x = GET_INT_ARG(2);
        int32_t y = GET_INT_ARG(3);
        M5.Display.drawNumber(number, x, y);
    }
    SET_NIL_RETURN();
}
void c_m5_gfx_draw_float(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_centre_string(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_center_string(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_right_string(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_draw_char(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }

void mrbc_m5gfx_draw_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "draw_pixel", c_m5_gfx_draw_pixel);
    mrbc_define_method(vm, class_M5Gfx, "draw_fast_v_line", c_m5_gfx_draw_fast_v_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_fast_h_line", c_m5_gfx_draw_fast_h_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_rect", c_m5_gfx_draw_rect);
    mrbc_define_method(vm, class_M5Gfx, "draw_round_rect", c_m5_gfx_draw_round_rect);
    mrbc_define_method(vm, class_M5Gfx, "draw_circle", c_m5_gfx_draw_circle);
    mrbc_define_method(vm, class_M5Gfx, "draw_ellipse", c_m5_gfx_draw_ellipse);
    mrbc_define_method(vm, class_M5Gfx, "draw_line", c_m5_gfx_draw_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_triangle", c_m5_gfx_draw_triangle);
    mrbc_define_method(vm, class_M5Gfx, "draw_bezier", c_m5_gfx_draw_bezier);
    mrbc_define_method(vm, class_M5Gfx, "draw_ellipse_arc", c_m5_gfx_draw_ellipse_arc);
    mrbc_define_method(vm, class_M5Gfx, "draw_arc", c_m5_gfx_draw_arc);
    mrbc_define_method(vm, class_M5Gfx, "draw_circle_helper", c_m5_gfx_draw_circle_helper);
    mrbc_define_method(vm, class_M5Gfx, "draw_gradient_h_line", c_m5_gfx_draw_gradient_h_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_gradient_v_line", c_m5_gfx_draw_gradient_v_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_gradient_line", c_m5_gfx_draw_gradient_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_smooth_line", c_m5_gfx_draw_smooth_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_wide_line", c_m5_gfx_draw_wide_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_wedge_line", c_m5_gfx_draw_wedge_line);
    mrbc_define_method(vm, class_M5Gfx, "draw_spot", c_m5_gfx_draw_spot);
    mrbc_define_method(vm, class_M5Gfx, "draw_gradient_spot", c_m5_gfx_draw_gradient_spot);
    mrbc_define_method(vm, class_M5Gfx, "draw_bitmap", c_m5_gfx_draw_bitmap);
    mrbc_define_method(vm, class_M5Gfx, "draw_x_bitmap", c_m5_gfx_draw_x_bitmap);
    mrbc_define_method(vm, class_M5Gfx, "draw_string", c_m5_gfx_draw_string);
    mrbc_define_method(vm, class_M5Gfx, "draw_number", c_m5_gfx_draw_number);
    mrbc_define_method(vm, class_M5Gfx, "draw_float", c_m5_gfx_draw_float);
    mrbc_define_method(vm, class_M5Gfx, "draw_centre_string", c_m5_gfx_draw_centre_string);
    mrbc_define_method(vm, class_M5Gfx, "draw_center_string", c_m5_gfx_draw_center_string);
    mrbc_define_method(vm, class_M5Gfx, "draw_right_string", c_m5_gfx_draw_right_string);
    mrbc_define_method(vm, class_M5Gfx, "draw_char", c_m5_gfx_draw_char);
}

} // extern "C"
