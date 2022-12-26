/*
 * HEATING_SYSTEM.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */


#include "HEATING_SYSTEM.h"

void heating_system_enable()
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN4, DIO_PIN_OUTPUT);
	DIO_SetPinVal(DIO_PORTC,DIO_PIN4, DIO_PIN_HIGH);
}

void heating_system_disable()
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN4, DIO_PIN_OUTPUT);
    DIO_SetPinVal(DIO_PORTC,DIO_PIN4, DIO_PIN_LOW);
}

