/*
 * BUTTONS.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */



#include "BUTTONS.h"

extern uint8 temp;
extern uint8 system_on_flag;


void ON_SYSTEM_BUTTON(void)
{

	DIO_SetPinDir(DIO_PORTC,DIO_PIN2, DIO_PIN_INPUT);


	if (DIO_GetPinVal(DIO_PORTC, DIO_PIN2)==1)
	{
		system_on_flag=1;

	}
	else
	{
	}
}

void OFF_SYSTEM_BUTTON()
{
	DIO_SetPinDir(DIO_PORTB,DIO_PIN3, DIO_PIN_INPUT);

	if (DIO_GetPinVal(DIO_PORTB, DIO_PIN3))
	{
	   system_on_flag=0;

	}
	else
	{
	}

}

void INCREASE_TEMPREATURE_BUTTON(uint8 *degree)
{
	    if (*degree<=70)
	    {
		*degree+=5;
	    }
	    else
	    {
	    }
}

void DECREASE_TEMPREATURE_BUTTON(uint8 *degree)
{
	    if (*degree>=40)
	    {
	    *degree-=5;
	    }
	    else
	    {
	    }
}
