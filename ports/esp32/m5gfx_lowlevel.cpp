/*
 * M5GFX Low-level Methods - mruby/c implementation
 *
 * This file contains M5GFX low-level drawing methods.
 * Total methods: 18
 */

#include <M5Unified.h>
#include "m5unified_impl.h"

extern "C" {

void c_m5_gfx_start_write(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_end_write(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_begin_transaction(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_end_transaction(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_start_count(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_window(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_addr_window(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_pixel(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_fast_v_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_fast_h_line(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_fill_rect(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_fill_rect_preclipped(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_color(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_pixels(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_write_pixels_dma(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_init_dma(mrbc_vm *vm, mrbc_value *v, int argc) { SET_FALSE_RETURN(); }
void c_m5_gfx_wait_dma(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_dma_busy(mrbc_vm *vm, mrbc_value *v, int argc) { SET_FALSE_RETURN(); }

void mrbc_m5gfx_lowlevel_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "start_write", c_m5_gfx_start_write);
    mrbc_define_method(vm, class_M5Gfx, "end_write", c_m5_gfx_end_write);
    mrbc_define_method(vm, class_M5Gfx, "begin_transaction", c_m5_gfx_begin_transaction);
    mrbc_define_method(vm, class_M5Gfx, "end_transaction", c_m5_gfx_end_transaction);
    mrbc_define_method(vm, class_M5Gfx, "get_start_count", c_m5_gfx_get_start_count);
    mrbc_define_method(vm, class_M5Gfx, "set_window", c_m5_gfx_set_window);
    mrbc_define_method(vm, class_M5Gfx, "set_addr_window", c_m5_gfx_set_addr_window);
    mrbc_define_method(vm, class_M5Gfx, "write_pixel", c_m5_gfx_write_pixel);
    mrbc_define_method(vm, class_M5Gfx, "write_fast_v_line", c_m5_gfx_write_fast_v_line);
    mrbc_define_method(vm, class_M5Gfx, "write_fast_h_line", c_m5_gfx_write_fast_h_line);
    mrbc_define_method(vm, class_M5Gfx, "write_fill_rect", c_m5_gfx_write_fill_rect);
    mrbc_define_method(vm, class_M5Gfx, "write_fill_rect_preclipped", c_m5_gfx_write_fill_rect_preclipped);
    mrbc_define_method(vm, class_M5Gfx, "write_color", c_m5_gfx_write_color);
    mrbc_define_method(vm, class_M5Gfx, "write_pixels", c_m5_gfx_write_pixels);
    mrbc_define_method(vm, class_M5Gfx, "write_pixels_dma", c_m5_gfx_write_pixels_dma);
    mrbc_define_method(vm, class_M5Gfx, "init_dma", c_m5_gfx_init_dma);
    mrbc_define_method(vm, class_M5Gfx, "wait_dma", c_m5_gfx_wait_dma);
    mrbc_define_method(vm, class_M5Gfx, "dma_busy", c_m5_gfx_dma_busy);
}

} // extern "C"
