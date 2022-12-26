/*
 * COOLING_SYSTEM.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include "COOLING_SYSTEM.h"

void cooling_system_enable()
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN3, DIO_PIN_OUTPUT);
	DIO_SetPinVal(DIO_PORTC,DIO_PIN3, DIO_PIN_HIGH);
}

void cooling_system_disable()
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN3, DIO_PIN_OUTPUT);
    DIO_SetPinVal(DIO_PORTC,DIO_PIN3, DIO_PIN_LOW);
}



