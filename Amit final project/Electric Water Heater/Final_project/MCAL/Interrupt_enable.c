/*
 * Interrupt_enable.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include <avr/interrupt.h>
#include "interrupt_enable.h"

void (*ptr0)(void) = NULL;
void (*ptr1)(void) = NULL;
void (*ptr2)(void) = NULL;

void ENABLE_INTERRUPTS()
{
    PORTB=(1<<2);
    PORTD=(1<<2)|(1<<3);
	GICR = (1<<7)|(1<<6)|(1<<5);
	sei();

}

void SET_CALLBACK_INC(void(*p)(void))
{
	ptr0 = p;
}
void SET_CALLBACK_DEC(void(*p)(void))
{
	ptr1 = p;
}
void SET_CALLBACK_SHUT(void(*p)(void))
{
	ptr2 = p;
}




ISR(INT0_vect)
{
    (*ptr0)();
}
ISR(INT1_vect)
{

    (*ptr1)();

}
ISR(INT2_vect)
{
    (*ptr2)();
}
