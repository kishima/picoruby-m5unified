/*
 * M5Unified Core Methods - mruby/c implementation
 *
 * This file contains M5Unified core functionality methods.
 * Total methods: 19
 */

#include <M5Unified.h>
#include "m5unified_impl.h"

extern "C" {

// Global class pointer for M5Gfx class (defined in C++ to avoid linking issues)
mrbc_class *mrbc_class_M5Gfx = NULL;

/* ==============================================
 * Method: M5.begin
 * Return: void
 * Params: void (optional config)
 * ============================================== */
void
c_m5_unified_begin(mrbc_vm *vm, mrbc_value *v, int argc)
{
    // Initialize M5Unified with default config
    auto cfg = M5.config();
    M5.begin(cfg);

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.get_pin
 * Return: int8_t
 * Params: pin_name_t name
 * ============================================== */
void
c_m5_unified_get_pin(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */
    /* Example:
     * mrbc_value name = GET_ARG(1);
     */

    /* TODO: Implement C++ method call */
    /* Example:
     * int8_t result = M5.getPin(...);
     */

    /* TODO: Convert return value */
    SET_INT_RETURN(0);  // Placeholder
}

/* ==============================================
 * Method: M5.get_button
 * Return: Button_Class&
 * Params: size_t index
 * ============================================== */
void
c_m5_unified_get_button(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    /* TODO: Convert return value to wrapped object */
    SET_NIL_RETURN();  // Placeholder
}

/* ==============================================
 * Method: M5.Display  (property getter)
 * Return: M5GFX instance
 * Params: void
 * ============================================== */
void
c_m5_unified_display(mrbc_vm *vm, mrbc_value *v, int argc)
{
    // Return the M5Gfx class (singleton pattern)
    // The actual M5.Display reference is accessed via M5GFX methods
    mrbc_value ret = mrbc_instance_new(vm, mrbc_class_M5Gfx, 0);
    SET_RETURN(ret);
}

/* ==============================================
 * Method: M5.get_display
 * Return: M5GFX&
 * Params: size_t index
 * ============================================== */
void
c_m5_unified_get_display(mrbc_vm *vm, mrbc_value *v, int argc)
{
    // Default to index 0 if not specified
    size_t index = 0;
    if (argc >= 1) {
        index = GET_INT_ARG(1);
    }

    // For now, return M5Gfx instance (index parameter not fully implemented)
    mrbc_value ret = mrbc_instance_new(vm, mrbc_class_M5Gfx, 0);
    SET_RETURN(ret);
}

/* ==============================================
 * Method: M5.get_display_count
 * Return: std::size_t
 * Params: void
 * ============================================== */
void
c_m5_unified_get_display_count(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Implement C++ method call */
    /* Example:
     * size_t count = M5.getDisplayCount();
     */

    SET_INT_RETURN(0);  // Placeholder
}

/* ==============================================
 * Method: M5.add_display
 * Return: std::size_t
 * Params: M5GFX& display
 * ============================================== */
void
c_m5_unified_add_display(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_INT_RETURN(0);  // Placeholder
}

/* ==============================================
 * Method: M5.get_display_index
 * Return: int8_t
 * Params: const IDisplay* display
 * ============================================== */
void
c_m5_unified_get_display_index(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_INT_RETURN(0);  // Placeholder
}

/* ==============================================
 * Method: M5.set_primary_display
 * Return: void
 * Params: size_t index
 * ============================================== */
void
c_m5_unified_set_primary_display(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.set_primary_display_type
 * Return: void
 * Params: uint8_t display_type
 * ============================================== */
void
c_m5_unified_set_primary_display_type(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.set_log_display_index
 * Return: void
 * Params: int8_t index
 * ============================================== */
void
c_m5_unified_set_log_display_index(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.set_log_display_type
 * Return: void
 * Params: uint8_t display_type
 * ============================================== */
void
c_m5_unified_set_log_display_type(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.get_update_msec
 * Return: uint32_t
 * Params: void
 * ============================================== */
void
c_m5_unified_get_update_msec(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Implement C++ method call */

    SET_INT_RETURN(0);  // Placeholder
}

/* ==============================================
 * Method: M5.config_t
 * Return: config_t
 * Params: void
 * ============================================== */
void
c_m5_unified_config_t(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Implement C++ method call */
    /* Return config struct as hash or custom object */

    SET_NIL_RETURN();  // Placeholder
}

/* ==============================================
 * Method: M5.get_board
 * Return: board_t
 * Params: void
 * ============================================== */
void
c_m5_unified_get_board(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Implement C++ method call */

    SET_INT_RETURN(0);  // Placeholder - return board enum value
}

/* ==============================================
 * Method: M5.update
 * Return: void
 * Params: void
 * ============================================== */
void
c_m5_unified_update(mrbc_vm *vm, mrbc_value *v, int argc)
{
    // Update M5Unified (buttons, touch, etc.)
    M5.update();

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.dsp
 * Return: void
 * Params: void
 * ============================================== */
void
c_m5_unified_dsp(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Implement C++ method call */

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.set_touch_button_height_by_ratio
 * Return: void
 * Params: float ratio
 * ============================================== */
void
c_m5_unified_set_touch_button_height_by_ratio(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.set_touch_button_height
 * Return: void
 * Params: int32_t height
 * ============================================== */
void
c_m5_unified_set_touch_button_height(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Extract parameters */

    /* TODO: Implement C++ method call */

    SET_NIL_RETURN();
}

/* ==============================================
 * Method: M5.get_touch_button_height
 * Return: int32_t
 * Params: void
 * ============================================== */
void
c_m5_unified_get_touch_button_height(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Implement C++ method call */

    SET_INT_RETURN(0);  // Placeholder
}

/* ==============================================
 * Method: M5.get_io_expander
 * Return: In_GPIO*
 * Params: void
 * ============================================== */
void
c_m5_unified_get_io_expander(mrbc_vm *vm, mrbc_value *v, int argc)
{
    /* TODO: Implement C++ method call */
    /* Return wrapped pointer or object */

    SET_NIL_RETURN();  // Placeholder
}

/* ==============================================
 * Initialization function for M5Unified core
 * ============================================== */
void
mrbc_m5unified_core_init(struct VM *vm)
{
    mrbc_class *m5_module;

    /* Define M5 module */
    m5_module = mrbc_define_module(vm, "M5");

    /* Register M5Unified methods as M5 module methods */
    mrbc_define_method(vm, m5_module, "begin", c_m5_unified_begin);
    mrbc_define_method(vm, m5_module, "Display", c_m5_unified_display);
    mrbc_define_method(vm, m5_module, "get_pin", c_m5_unified_get_pin);
    mrbc_define_method(vm, m5_module, "get_button", c_m5_unified_get_button);
    mrbc_define_method(vm, m5_module, "get_display", c_m5_unified_get_display);
    mrbc_define_method(vm, m5_module, "get_display_count", c_m5_unified_get_display_count);
    mrbc_define_method(vm, m5_module, "add_display", c_m5_unified_add_display);
    mrbc_define_method(vm, m5_module, "get_display_index", c_m5_unified_get_display_index);
    mrbc_define_method(vm, m5_module, "set_primary_display", c_m5_unified_set_primary_display);
    mrbc_define_method(vm, m5_module, "set_primary_display_type", c_m5_unified_set_primary_display_type);
    mrbc_define_method(vm, m5_module, "set_log_display_index", c_m5_unified_set_log_display_index);
    mrbc_define_method(vm, m5_module, "set_log_display_type", c_m5_unified_set_log_display_type);
    mrbc_define_method(vm, m5_module, "get_update_msec", c_m5_unified_get_update_msec);
    mrbc_define_method(vm, m5_module, "config_t", c_m5_unified_config_t);
    mrbc_define_method(vm, m5_module, "get_board", c_m5_unified_get_board);
    mrbc_define_method(vm, m5_module, "update", c_m5_unified_update);
    mrbc_define_method(vm, m5_module, "dsp", c_m5_unified_dsp);
    mrbc_define_method(vm, m5_module, "set_touch_button_height_by_ratio", c_m5_unified_set_touch_button_height_by_ratio);
    mrbc_define_method(vm, m5_module, "set_touch_button_height", c_m5_unified_set_touch_button_height);
    mrbc_define_method(vm, m5_module, "get_touch_button_height", c_m5_unified_get_touch_button_height);
    mrbc_define_method(vm, m5_module, "get_io_expander", c_m5_unified_get_io_expander);
}

} // extern "C"
