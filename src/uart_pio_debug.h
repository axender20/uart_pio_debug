#pragma once
#ifndef _UART_PIO_DEBUG_H_
#define _UART_PIO_DEBUG_H_

#include "SerialPIO.h"

#ifdef SPIO_DEBUG_ENABLE
void uart_pio_init_debug();
extern SerialPIO uart_pio_debug;

#define DEBUG_INIT()(uart_pio_init_debug())
#define DEBUG_PRINTLN(_info)(uart_pio_debug.println(_info))
#define DEBUG_PRINT(_info)(uart_pio_debug.print(_info))

extern "C" {
  int __attribute__((weak)) _write_r(struct _reent* r, int fd, const char* buf, size_t count);
}

#else
#define DEBUG_INIT()
#define DEBUG_PRINTLN(_info)
#define DEBUG_PRINT(_info)
#endif

#endif //_UART_PIO_DEBUG_H_