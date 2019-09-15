// See LICENSE for license details.

#ifndef _PLATFORM_H
#define _PLATFORM_H

#include "const.h"
#include "clint.h"
#include "uart.h"

// Memory map
#define CLINT_CTRL_ADDR _AC(0x02000000,UL)

unsigned long get_cpu_freq(void);
unsigned long get_timer_freq(void);
uint64_t get_timer_value(void);

#endif /* _PLATFORM_H */