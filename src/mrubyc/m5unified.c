#include <mrubyc.h>
#include "../../ports/esp32/m5unified_impl.h"

// Gem initialization function for mruby/c
void
mrbc_picoruby_m5unified_gem_init(struct VM *vm)
{
    mrbc_class *class_M5Gfx;

    /* Initialize M5 module with core methods */
    mrbc_m5unified_core_init(vm);

    /* Define M5Gfx class */
    class_M5Gfx = mrbc_define_class(vm, "M5Gfx", mrbc_class_object);

    /* Initialize M5GFX method groups */
    mrbc_m5gfx_color_init(vm, class_M5Gfx);
    mrbc_m5gfx_draw_init(vm, class_M5Gfx);
    mrbc_m5gfx_fill_init(vm, class_M5Gfx);
    mrbc_m5gfx_text_init(vm, class_M5Gfx);
    mrbc_m5gfx_image_init(vm, class_M5Gfx);
    mrbc_m5gfx_display_init(vm, class_M5Gfx);
    mrbc_m5gfx_lowlevel_init(vm, class_M5Gfx);
    mrbc_m5gfx_util_init(vm, class_M5Gfx);

    /* TODO: Initialize C++ M5Unified objects */
    /* Example:
     * auto cfg = M5.config();
     * M5.begin(cfg);
     */

    /* TODO: Setup M5.Display accessor */
}
