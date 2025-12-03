#ifndef UART_MODULE_H
#define UART_MODULE_H

#include <Arduino.h>

extern String data1;
void uart_init();
void uart_read();

#endif

//uart_module.cpp

#include "uart_module.h"

#include <Arduino.h>
UART Serial2(8, 9, NC, NC); // 9 RX, 8 TX
String data1="";

void uart_init() {
  Serial.begin(9600);
  Serial2.begin(9600);
}

void uart_read() {
  if (Serial2.available()) {
    data1 = Serial2.readString();
    Serial.println(data1);
  }
}
