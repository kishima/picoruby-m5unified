/* M5GFX Image Methods - mruby/c implementation */

#include <M5Unified.h>
#include "m5unified_impl.h"

extern "C" {

void c_m5_gfx_push_image(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_push_grayscale_image(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_push_grayscale_image_rotate_zoom(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_push_grayscale_image_affine(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_push_alpha_image(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_push_block(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_push_pixels(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_push_pixels_dma(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_read_rect_rgb(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_read_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_p(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_copy_rect(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 7) {
        int32_t dst_x = GET_INT_ARG(1);
        int32_t dst_y = GET_INT_ARG(2);
        int32_t w = GET_INT_ARG(3);
        int32_t h = GET_INT_ARG(4);
        int32_t src_x = GET_INT_ARG(5);
        int32_t src_y = GET_INT_ARG(6);
        M5.Display.copyRect(dst_x, dst_y, w, h, src_x, src_y);
    }
    SET_NIL_RETURN();
}

void c_m5_gfx_scroll(mrbc_vm *vm, mrbc_value *v, int argc) {
    if (argc >= 2) {
        int32_t dx = GET_INT_ARG(1);
        int32_t dy = GET_INT_ARG(2);
        M5.Display.scroll(dx, dy);
    }
    SET_NIL_RETURN();
}

void mrbc_m5gfx_image_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "push_image", c_m5_gfx_push_image);
    mrbc_define_method(vm, class_M5Gfx, "push_grayscale_image", c_m5_gfx_push_grayscale_image);
    mrbc_define_method(vm, class_M5Gfx, "push_grayscale_image_rotate_zoom", c_m5_gfx_push_grayscale_image_rotate_zoom);
    mrbc_define_method(vm, class_M5Gfx, "push_grayscale_image_affine", c_m5_gfx_push_grayscale_image_affine);
    mrbc_define_method(vm, class_M5Gfx, "push_alpha_image", c_m5_gfx_push_alpha_image);
    mrbc_define_method(vm, class_M5Gfx, "push_block", c_m5_gfx_push_block);
    mrbc_define_method(vm, class_M5Gfx, "push_pixels", c_m5_gfx_push_pixels);
    mrbc_define_method(vm, class_M5Gfx, "push_pixels_dma", c_m5_gfx_push_pixels_dma);
    mrbc_define_method(vm, class_M5Gfx, "read_rect_rgb", c_m5_gfx_read_rect_rgb);
    mrbc_define_method(vm, class_M5Gfx, "read_rect", c_m5_gfx_read_rect);
    mrbc_define_method(vm, class_M5Gfx, "p", c_m5_gfx_p);
    mrbc_define_method(vm, class_M5Gfx, "copy_rect", c_m5_gfx_copy_rect);
    mrbc_define_method(vm, class_M5Gfx, "scroll", c_m5_gfx_scroll);
}

} // extern "C"
