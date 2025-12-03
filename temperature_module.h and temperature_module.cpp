#ifndef TEMPERATURE_MODULE_H
#define TEMPERATURE_MODULE_H

#include <DallasTemperature.h>
#include <OneWire.h>

extern OneWire oneWire;
extern DallasTemperature sensors;

void sensors_init();
float read_temperature();

#endif

//temperature_module.cpp
#include "temperature_module.h"

const int oneWireBus = 4;
OneWire oneWire(oneWireBus);
DallasTemperature sensors(&oneWire);

void sensors_init() {
    sensors.begin();
}

float read_temperature() {
    sensors.requestTemperatures();
    return sensors.getTempCByIndex(0);
}
