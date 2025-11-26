#include <stdlib.h>
#include "../include/picoruby_m5unified.h"

#if defined(PICORB_VM_MRUBY)

#include "mruby/m5unified.c"

#elif defined(PICORB_VM_MRUBYC)

#include "mrubyc/m5unified.c"

#endif
