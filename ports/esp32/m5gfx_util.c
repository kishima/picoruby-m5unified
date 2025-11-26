/* M5GFX Utility Methods - mruby/c implementation */

#include "m5unified_impl.h"

void c_m5_gfx_flood_fill(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_paint(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_map_gradient(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_qrcode(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_file(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_create_png(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_release_png_memory(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_cp437(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_set_attribute(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_get_attribute(mrbc_vm *vm, mrbc_value *v, int argc) { SET_INT_RETURN(0); }
void c_m5_gfx_set_file_storage(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_clear_file_storage(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }
void c_m5_gfx_prepare_tmp_transaction(mrbc_vm *vm, mrbc_value *v, int argc) { SET_NIL_RETURN(); }

void mrbc_m5gfx_util_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "flood_fill", c_m5_gfx_flood_fill);
    mrbc_define_method(vm, class_M5Gfx, "paint", c_m5_gfx_paint);
    mrbc_define_method(vm, class_M5Gfx, "map_gradient", c_m5_gfx_map_gradient);
    mrbc_define_method(vm, class_M5Gfx, "qrcode", c_m5_gfx_qrcode);
    mrbc_define_method(vm, class_M5Gfx, "file", c_m5_gfx_file);
    mrbc_define_method(vm, class_M5Gfx, "create_png", c_m5_gfx_create_png);
    mrbc_define_method(vm, class_M5Gfx, "release_png_memory", c_m5_gfx_release_png_memory);
    mrbc_define_method(vm, class_M5Gfx, "cp437", c_m5_gfx_cp437);
    mrbc_define_method(vm, class_M5Gfx, "set_attribute", c_m5_gfx_set_attribute);
    mrbc_define_method(vm, class_M5Gfx, "get_attribute", c_m5_gfx_get_attribute);
    mrbc_define_method(vm, class_M5Gfx, "set_file_storage", c_m5_gfx_set_file_storage);
    mrbc_define_method(vm, class_M5Gfx, "clear_file_storage", c_m5_gfx_clear_file_storage);
    mrbc_define_method(vm, class_M5Gfx, "prepare_tmp_transaction", c_m5_gfx_prepare_tmp_transaction);
}
