/*
 ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <chazwilmot@gmail.com> & <tristjpawlenty@gmail.com> wrote and adapted this file.  
 * As long as you retain this notice you can do whatever you want with this stuff. 
 * If we meet some day, and you think this stuff is worth it, you can buy me a beer.
 *                                          Charles Wilmot and Tristan Pawlenty
 * ----------------------------------------------------------------------------
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <joerg@FreeBSD.ORG> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.        Joerg Wunsch
 * ----------------------------------------------------------------------------
 *
 * General stdiodemo defines
 *
 * Replace X and Y with your defintions based on your hardware
 *
 * $Id$
 */

/* CPU frequency */
#define F_CPU X   // define your CPU Frequency

/* UART baud rate */
#define UART_BAUD  X   // define your UART baud rate

/* HD44780 LCD port connections */
#define HD44780_RS X, Y   // X = PORT Name | Y = PORT number
#define HD44780_RW X, Y   // X = PORT Name | Y = PORT number
#define HD44780_E  X, Y   // X = PORT Name | Y = PORT number
/* The data bits have to be not only in ascending order but also consecutive. */
#define HD44780_D4 X, Y   // X = PORT Name | Y = PORT number

/* Whether to read the busy flag, or fall back to
   worst-time delays. */
#define USE_BUSY_BIT 1
