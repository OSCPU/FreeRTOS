// See LICENSE for license details.

#ifndef _SIFIVE_PLATFORM_H
#define _SIFIVE_PLATFORM_H

#include "sifive/const.h"
#include "sifive/devices/clint.h"
#include "sifive/devices/uart.h"

// Memory map
#define CLINT_CTRL_ADDR _AC(0x02000000,UL)

unsigned long get_cpu_freq(void);
unsigned long get_timer_freq(void);
uint64_t get_timer_value(void);

#endif /* _SIFIVE_PLATFORM_H */
