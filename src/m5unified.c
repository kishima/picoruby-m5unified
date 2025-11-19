#include "picoruby.h"
#include "../include/picoruby_m5unified.h"

// Gem initialization functions required by mrbgem system
void
mrb_picoruby_m5unified_gem_init(mrb_state *mrb)
{
  mrb_picoruby_m5unified_init_impl(mrb);
}

void
mrb_picoruby_m5unified_gem_final(mrb_state *mrb)
{
  
}
