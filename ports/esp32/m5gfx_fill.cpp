/*
 * M5GFX Fill Methods - mruby/c implementation
 *
 * This file contains M5GFX fill-related methods.
 * Total methods: 13
 */

#include <M5Unified.h>
#include "m5unified_impl.h"

extern "C" {

void c_m5_gfx_fill_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_round_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_circle(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_ellipse(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_triangle(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_ellipse_arc(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_arc(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_circle_helper(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_affine(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_gradient_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_smooth_round_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_smooth_circle(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_fill_screen(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }

void mrbc_m5gfx_fill_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "fill_rect", c_m5_gfx_fill_rect);
    mrbc_define_method(vm, class_M5Gfx, "fill_round_rect", c_m5_gfx_fill_round_rect);
    mrbc_define_method(vm, class_M5Gfx, "fill_circle", c_m5_gfx_fill_circle);
    mrbc_define_method(vm, class_M5Gfx, "fill_ellipse", c_m5_gfx_fill_ellipse);
    mrbc_define_method(vm, class_M5Gfx, "fill_triangle", c_m5_gfx_fill_triangle);
    mrbc_define_method(vm, class_M5Gfx, "fill_ellipse_arc", c_m5_gfx_fill_ellipse_arc);
    mrbc_define_method(vm, class_M5Gfx, "fill_arc", c_m5_gfx_fill_arc);
    mrbc_define_method(vm, class_M5Gfx, "fill_circle_helper", c_m5_gfx_fill_circle_helper);
    mrbc_define_method(vm, class_M5Gfx, "fill_affine", c_m5_gfx_fill_affine);
    mrbc_define_method(vm, class_M5Gfx, "fill_gradient_rect", c_m5_gfx_fill_gradient_rect);
    mrbc_define_method(vm, class_M5Gfx, "fill_smooth_round_rect", c_m5_gfx_fill_smooth_round_rect);
    mrbc_define_method(vm, class_M5Gfx, "fill_smooth_circle", c_m5_gfx_fill_smooth_circle);
    mrbc_define_method(vm, class_M5Gfx, "fill_screen", c_m5_gfx_fill_screen);
}

} // extern "C"
