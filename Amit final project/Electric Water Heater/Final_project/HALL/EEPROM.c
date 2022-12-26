/*
 * EEPROM.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */


#include "EEPROM.h"


void EEPROM_Init()
{
	I2C_Master_Init();

}


void EEPROM_WRITE(uint8 EEPROM_ADDRESS,uint8 EEPROM_DATA)
{
	I2C_Start_Condition();
	I2C_SendSlaveAddress_Write(0b1010000);
	I2C_Send_Data(EEPROM_ADDRESS);
	I2C_Send_Data(EEPROM_DATA);
	I2C_Stop_Condition();

}
uint8 EEPROM_READ(uint8 EEPROM_ADDRESS)
{
	uint8 data=0;
	I2C_Start_Condition();
	I2C_SendSlaveAddress_Write(0b1010000);
	I2C_Send_Data(EEPROM_ADDRESS);
	I2C_Repeated_Start();
	I2C_SendSlaveAddress_Read(0b1010000);
	data = I2C_Read_Data();
	I2C_Stop_Condition();

	return data;
}


