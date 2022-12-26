/*
 * PROTOCOL.h
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/io.h>

#include "COOLING_SYSTEM.h"
#include "HEATING_SYSTEM.h"
#include "BUTTONS.h"
#include "../MCAL/interrupt_enable.h"
#include "LM35.h"
#include "SEVEN_SEGMENT.h"

#ifndef PROTOCOL_H_
#define PROTOCOL_H_

void INITIALIZING_THE_SYSTEM(void);

void SENSOR_READING(void);

void HEATING_THE_SYSTEM(void);

void COOLING_THE_SYSTEM(void);

void SHUT_DOWN(void);

void BLINKING_DISPLAY(void);

void TEMPREATURE_MANAGMENT(void);

void GET_DESIRED_TEMP_FROM_EEPROM(void);

void TEMPREATURE_SETTING_MODE(void);

void DECREASING_THE_TEMPREATURE(void);

void INCREASING_THE_TEMPREATURE(void);

void SHUTTING_DOWN(void);


#endif /* PROTOCOL_H_ */
