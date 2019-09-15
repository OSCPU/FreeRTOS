#include "platform.h"

static volatile uint8_t *uart = (void *)0xa10003f8;

void uart_putc(uint8_t ch) {
  uart[0] = ch;
}

int uart_getc(void) {
  return -1;
}

void uart_init(void){
}
