/*
 * interrupt_enable.h
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include "../MCAL/DIO.h"
#include "../STD_TYPES.h"
#include "../Macros.h"


#ifndef MCAL_INTERRUPT_ENABLE_H_
#define MCAL_INTERRUPT_ENABLE_H_

#define NULL ((void*)(0))

void ENABLE_INTERRUPTS();

void SET_CALLBACK_INC(void(*p)(void));

void SET_CALLBACK_DEC(void(*p)(void));

void SET_CALLBACK_SHUT(void(*p)(void));


#endif /* MCAL_INTERRUPT_ENABLE_H_ */
