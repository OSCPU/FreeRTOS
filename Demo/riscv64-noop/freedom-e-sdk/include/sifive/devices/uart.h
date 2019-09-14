// See LICENSE for license details.

#ifndef _SIFIVE_UART_H
#define _SIFIVE_UART_H

#include <stdint.h>

void uart_putc(uint8_t ch);
int uart_getc(void);
void uart_init(void);

#endif /* _SIFIVE_UART_H */
