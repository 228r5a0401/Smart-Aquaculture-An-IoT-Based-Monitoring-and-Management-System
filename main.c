#include "lcd_display.h"
#include "uart_module.h"
#include "blynk_module.h"
#include "temperature_module.h"

void setup() {
  lcd_init();
  uart_init();
  sensors_init();
  blynk_init();
}

void loop() {
  blynk_run();
  timer_run();
}
