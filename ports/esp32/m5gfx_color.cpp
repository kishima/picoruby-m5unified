/*
 * M5GFX Color Methods - mruby/c implementation
 *
 * This file contains M5GFX color-related methods.
 * Total methods: 12
 */

#include <M5Unified.h>
#include "m5unified_impl.h"

extern "C" {

/* ==============================================
 * Method: M5Gfx#color16to8
 * ============================================== */
void
c_m5_gfx_color16to8(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */
    /* TODO: Implement color16to8 conversion */
    SET_INT_RETURN(0);
}

/* ==============================================
 * Method: M5Gfx#color8to16
 * ============================================== */
void
c_m5_gfx_color8to16(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */
    /* TODO: Implement color8to16 conversion */
    SET_INT_RETURN(0);
}

/* ==============================================
 * Method: M5Gfx#color16to24
 * ============================================== */
void
c_m5_gfx_color16to24(mrbc_vm *vm, mrbc_value *v, int argc)
{
    if (argc >= 1) {
        uint16_t color16 = GET_INT_ARG(1);
        uint32_t color24 = M5.Display.color16to24(color16);
        SET_INT_RETURN(color24);
    } else {
        SET_INT_RETURN(0);
    }
}

/* ==============================================
 * Method: M5Gfx#color24to16
 * ============================================== */
void
c_m5_gfx_color24to16(mrbc_vm *vm, mrbc_value *v, int argc)
{
    if (argc >= 1) {
        uint32_t color24 = GET_INT_ARG(1);
        uint16_t color16 = M5.Display.color24to16(color24);
        SET_INT_RETURN(color16);
    } else {
        SET_INT_RETURN(0);
    }
}

/* ==============================================
 * Method: M5Gfx#set_color
 * ============================================== */
void
c_m5_gfx_set_color(mrbc_vm *vm, mrbc_value *v, int argc)
{
    if (argc >= 3) {
        uint8_t r = GET_INT_ARG(1);
        uint8_t g = GET_INT_ARG(2);
        uint8_t b = GET_INT_ARG(3);
        M5.Display.setColor(r, g, b);
    } else if (argc >= 1) {
        uint32_t color = GET_INT_ARG(1);
        M5.Display.setColor(color);
    }
    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5Gfx#set_raw_color
 * ============================================== */
void
c_m5_gfx_set_raw_color(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract color parameter */
    /* TODO: Call setRawColor */
    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5Gfx#get_raw_color
 * ============================================== */
void
c_m5_gfx_get_raw_color(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Get raw color value */
    SET_INT_RETURN(0);
}

/* ==============================================
 * Method: M5Gfx#set_base_color
 * ============================================== */
void
c_m5_gfx_set_base_color(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract color parameter */
    /* TODO: Call setBaseColor */
    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5Gfx#get_base_color
 * ============================================== */
void
c_m5_gfx_get_base_color(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Get base color */
    SET_INT_RETURN(0);
}

/* ==============================================
 * Method: M5Gfx#get_palette
 * ============================================== */
void
c_m5_gfx_get_palette(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract index parameter */
    /* TODO: Get palette color at index */
    SET_INT_RETURN(0);
}

/* ==============================================
 * Method: M5Gfx#get_palette_count
 * ============================================== */
void
c_m5_gfx_get_palette_count(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Get palette count */
    SET_INT_RETURN(0);
}

/* ==============================================
 * Method: M5Gfx#has_palette
 * ============================================== */
void
c_m5_gfx_has_palette(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Check if has palette */
    SET_FALSE_RETURN();
}

/* ==============================================
 * Initialization function for color methods
 * ============================================== */
void
mrbc_m5gfx_color_init(struct VM *vm, mrbc_class *class_M5Gfx)
{
    mrbc_define_method(vm, class_M5Gfx, "color16to8", c_m5_gfx_color16to8);
    mrbc_define_method(vm, class_M5Gfx, "color8to16", c_m5_gfx_color8to16);
    mrbc_define_method(vm, class_M5Gfx, "color16to24", c_m5_gfx_color16to24);
    mrbc_define_method(vm, class_M5Gfx, "color24to16", c_m5_gfx_color24to16);
    mrbc_define_method(vm, class_M5Gfx, "set_color", c_m5_gfx_set_color);
    mrbc_define_method(vm, class_M5Gfx, "set_raw_color", c_m5_gfx_set_raw_color);
    mrbc_define_method(vm, class_M5Gfx, "get_raw_color", c_m5_gfx_get_raw_color);
    mrbc_define_method(vm, class_M5Gfx, "set_base_color", c_m5_gfx_set_base_color);
    mrbc_define_method(vm, class_M5Gfx, "get_base_color", c_m5_gfx_get_base_color);
    mrbc_define_method(vm, class_M5Gfx, "get_palette", c_m5_gfx_get_palette);
    mrbc_define_method(vm, class_M5Gfx, "get_palette_count", c_m5_gfx_get_palette_count);
    mrbc_define_method(vm, class_M5Gfx, "has_palette", c_m5_gfx_has_palette);
}

} // extern "C"
