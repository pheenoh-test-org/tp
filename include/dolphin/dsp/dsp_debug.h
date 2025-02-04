#ifndef DSP_DEBUG_H
#define DSP_DEBUG_H

#include "dolphin/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void __DSP_debug_printf(const char* fmt, ...);

#ifdef __cplusplus
}
#endif

#endif /* DSP_DEBUG_H */
