#include <Arduino.h>
#include <uart_pio_debug.h>

void setup() {
  DEBUG_INIT();
  DEBUG_PRINTLN("Hello world!");
}

void loop() {

}