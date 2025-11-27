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

void c_m5_gfx_draw_fast_v_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 4) {
        int32_t x = GET_INT_ARG(1);
        int32_t y = GET_INT_ARG(2);
        int32_t h = GET_INT_ARG(3);
        uint32_t color = GET_INT_ARG(4);
        M5.Display.drawFastVLine(x, y, h, color);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_fast_h_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 4) {
        int32_t x = GET_INT_ARG(1);
        int32_t y = GET_INT_ARG(2);
        int32_t w = GET_INT_ARG(3);
        uint32_t color = GET_INT_ARG(4);
        M5.Display.drawFastHLine(x, y, w, color);
    }
    SET_NIL_RETURN();
}

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

void c_m5_gfx_draw_round_rect(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 6) {
        int32_t x = GET_INT_ARG(1);
        int32_t y = GET_INT_ARG(2);
        int32_t w = GET_INT_ARG(3);
        int32_t h = GET_INT_ARG(4);
        int32_t r = GET_INT_ARG(5);
        uint32_t color = GET_INT_ARG(6);
        M5.Display.drawRoundRect(x, y, w, h, r, color);
    }
    SET_NIL_RETURN();
}

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

void c_m5_gfx_draw_ellipse(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 5) {
        int32_t x = GET_INT_ARG(1);
        int32_t y = GET_INT_ARG(2);
        int32_t rx = GET_INT_ARG(3);
        int32_t ry = GET_INT_ARG(4);
        uint32_t color = GET_INT_ARG(5);
        M5.Display.drawEllipse(x, y, rx, ry, color);
    }
    SET_NIL_RETURN();
}

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
void c_m5_gfx_draw_triangle(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 7) {
        int32_t x0 = GET_INT_ARG(1);
        int32_t y0 = GET_INT_ARG(2);
        int32_t x1 = GET_INT_ARG(3);
        int32_t y1 = GET_INT_ARG(4);
        int32_t x2 = GET_INT_ARG(5);
        int32_t y2 = GET_INT_ARG(6);
        uint32_t color = GET_INT_ARG(7);
        M5.Display.drawTriangle(x0, y0, x1, y1, x2, y2, color);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_bezier(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 7) {
        int32_t x0 = GET_INT_ARG(1);
        int32_t y0 = GET_INT_ARG(2);
        int32_t x1 = GET_INT_ARG(3);
        int32_t y1 = GET_INT_ARG(4);
        int32_t x2 = GET_INT_ARG(5);
        int32_t y2 = GET_INT_ARG(6);
        uint32_t color = GET_INT_ARG(7);
        M5.Display.drawBezier(x0, y0, x1, y1, x2, y2, color);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_ellipse_arc(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawEllipseArc requires float angles - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_arc(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawArc requires float angles - simplified for now
    SET_NIL_RETURN();
}
void c_m5_gfx_draw_circle_helper(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawCircleHelper is internal helper - not commonly used
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_gradient_h_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    // Gradient methods require color structs - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_gradient_v_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    // Gradient methods require color structs - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_gradient_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    // Gradient methods require color structs - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_smooth_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 5) {
        int32_t x0 = GET_INT_ARG(1);
        int32_t y0 = GET_INT_ARG(2);
        int32_t x1 = GET_INT_ARG(3);
        int32_t y1 = GET_INT_ARG(4);
        uint32_t color = GET_INT_ARG(5);
        M5.Display.drawSmoothLine(x0, y0, x1, y1, color);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_wide_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawWideLine requires float width - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_wedge_line(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawWedgeLine requires float widths - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_spot(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawSpot requires float radius - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_gradient_spot(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawGradientSpot requires gradient struct - simplified for now
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_bitmap(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawBitmap requires uint8_t* bitmap - complex type
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_x_bitmap(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawXBitmap requires uint8_t* bitmap - complex type
    SET_NIL_RETURN();
}
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
void c_m5_gfx_draw_float(mrbc_vm *vm, mrbc_value *v, int argc) {
    // drawFloat requires float number and decimal places - would need float support
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_centre_string(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 3) {
        mrbc_value str_val = GET_ARG(1);
        if (str_val.tt == MRBC_TT_STRING) {
            const char *str = (const char *)str_val.string->data;
            int32_t x = GET_INT_ARG(2);
            int32_t y = GET_INT_ARG(3);
            M5.Display.drawCentreString(str, x, y);
        }
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_center_string(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 3) {
        mrbc_value str_val = GET_ARG(1);
        if (str_val.tt == MRBC_TT_STRING) {
            const char *str = (const char *)str_val.string->data;
            int32_t x = GET_INT_ARG(2);
            int32_t y = GET_INT_ARG(3);
            M5.Display.drawCenterString(str, x, y);
        }
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_right_string(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 3) {
        mrbc_value str_val = GET_ARG(1);
        if (str_val.tt == MRBC_TT_STRING) {
            const char *str = (const char *)str_val.string->data;
            int32_t x = GET_INT_ARG(2);
            int32_t y = GET_INT_ARG(3);
            M5.Display.drawRightString(str, x, y);
        }
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_draw_char(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 3) {
        uint16_t uniCode = GET_INT_ARG(1);
        int32_t x = GET_INT_ARG(2);
        int32_t y = GET_INT_ARG(3);
        M5.Display.drawChar(uniCode, x, y);
    }
    SET_NIL_RETURN();
}

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
