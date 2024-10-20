/*
 * Fan_System.c
 *
 * Created: 10/20/2024 3:55:08 PM
 *  Author: Dell
 */ 


#include <avr/io.h>
#include "MCAL/DIO/DIO_int.h"
#include "MCAL/ADC/ADC_int.h"
#include "MCAL/TIMER/Timer_int.h"
#include "HAL/TEMP/TEMP.h"
#include "HAL/Keybad/Keypad_int.h"
#include "HAL/LCD/LCD_int.h"
#include "HAL/DC_Motor/DC_int.h"
#include "Lib/TYPES.H"
#include "Lib/BITMATH.H"
#include <avr/delay.h>

int main(void)
{
	ADC_init();
	LCD_vInit();
	DC_init();
    while(1)
    {
		LCD_clearscreen();
		TEMP_Speed(0);
		_delay_ms(1000);
        //TODO:: Please write your application code 
    }
}