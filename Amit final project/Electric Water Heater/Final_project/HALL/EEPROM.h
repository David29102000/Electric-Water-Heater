/*
 * EEPROM.h
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#ifndef HALL_EEPROM_H_
#define HALL_EEPROM_H_


#include "../MCAL/I2C.h"

void EEPROM_Init();
void EEPROM_WRITE(uint8 EEPROM_ADDRESS,uint8 EEPROM_DATA);
uint8 EEPROM_READ(uint8 EEPROM_ADDRESS);



#endif /* HALL_EEPROM_H_ */
