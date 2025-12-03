#ifndef LCD_DISPLAY_H
#define LCD_DISPLAY_H

#include <LiquidCrystal.h>

void lcd_init();
void lcd_print_message(String msg);

#endif


//lcd_display.cpp
#include "lcd_display.h"

const int rs = 15, en = 14, d4 = 13, d5 = 12, d6 = 11, d7 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void lcd_init() {
    lcd.begin(16, 2);
    lcd.print("Hello World");
}

void lcd_print_message(String msg) {
    lcd.clear();
    int len = msg.length();
    for (int i = 0; i < len; i++) {
        lcd.print(msg[i]);
        if ((i+1) % 16 == 0) lcd.setCursor(0,1);
    }
}
