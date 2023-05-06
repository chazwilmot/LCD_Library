# LCD_Library
Adaptation of Joerg Wunsch HD44780 Library https://github.com/vancegroup-mirrors/avr-libc/tree/master/avr-libc/doc/examples/stdiodemo


We used Joerg Wunsch's library for the HD44780 LCD and make changes and added functions to allow for easier use and the ability to use a 2x16 LCD rather than a 1x16 that the library was designed for.

Steps:
1. Add all these files to your project
2. Make edits in define.h
    A. Change to your hardware ports
3. #include
    A. #include "lcd.c"
    B. #include "defines.h"
    C. #include "lcd.h"
4. Define 
    A. FILE lcd_str = FDEV_SETUP_STREAM(lcd_putchar, NULL, _FDEV_SETUP_WRITE);\
5. stdout = &lcd_str
6. lcd_init();
7. Initialize I2C
8. Now if you have the hardware and software done
    A. Use printf("") to put messages on the screen
