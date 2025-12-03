#ifndef BLYNK_MODULE_H
#define BLYNK_MODULE_H

#include <BlynkSimpleEsp32.h>
#include <WiFi.h>

extern char auth[];
extern char ssid[];
extern char pass[];

void blynk_init();
void blynk_run();
void timer_run();

#endif


//blynk_module.cpp

#include "blynk_module.h"
#include <BlynkSimpleEsp32.h>
#include <BlynkWidgets.h>

BlynkTimer timer;

char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASS";

void blynk_init() {
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000L, []() {
    // Add periodic tasks here
  });
}

void blynk_run() {
  Blynk.run();
}

void timer_run() {
  timer.run();
}
