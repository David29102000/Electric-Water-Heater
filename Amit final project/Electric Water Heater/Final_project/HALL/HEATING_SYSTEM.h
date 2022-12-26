/*
 * HEATING_SYSTEM.h
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include "../STD_TYPES.h"
#include "../Macros.h"
#include "../MCAL/DIO.h"
#include <avr/io.h>
#include <avr/interrupt.h>

#ifndef HALL_HEATING_SYSTEM_H_
#define HALL_HEATING_SYSTEM_H_


void heating_system_enable();
void heating_system_disable();


#endif /* HALL_HEATING_SYSTEM_H_ */
