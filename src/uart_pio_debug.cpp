#include "uart_pio_debug.h"

const uint8_t uart_pio_debug_non_pin = SerialPIO::NOPIN;
const ulong uart_pio_debug_default_speed = 115200u;
const uint32_t uart_pio_debug_default_fifo_size = 32u;

#ifdef DEBUG_ENABLE

#ifndef SPIO_DEBUG_TX 
#define SPIO_DEBUG_TX uart_pio_debug_non_pin
#endif

#ifndef SPIO_DEBUG_RX 
#define SPIO_DEBUG_RX uart_pio_debug_non_pin
#endif

#ifndef SPIO_DEBUG_SPEED
#define SPIO_DEBUG_SPEED uart_pio_debug_default_speed
#endif

SerialPIO uart_pio_debug(SPIO_DEBUG_TX, SPIO_DEBUG_RX, uart_pio_debug_default_fifo_size);

void uart_pio_init_debug() {
  uart_pio_debug.begin(SPIO_DEBUG_SPEED);
}
#endif
