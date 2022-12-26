/*
 * I2C.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include "I2C.h"




void I2C_Master_Init(void)
{
    DIO_SetPinDir(DIO_PORTC , DIO_PIN0 , DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTC , DIO_PIN1 , DIO_PIN_OUTPUT);
	/*SCL Freq = 400K when the oscilator = 8M */
	TWBR = 0x02;
	/*Enable I2C*/
	SET_BIT(TWCR , 2);
}

void I2C_Slave_Init(void)
{
	/*Address of Slave*/
	TWAR = (0x01<<1);
	/*Enable I2C*/
	SET_BIT(TWCR , 2);
}

void I2C_Start_Condition(void)
{
	/*Generate Start Condition*/
	/*SET_BIT(TWCR , 5);

	SET_BIT(TWCR , 7);
	SET_BIT(TWCR , 2);*/
	TWCR = (1<<7) | (1<< 5) | (1<<2);

	while(GET_BIT(TWCR,7) == 0);

	while((TWSR & 0XF8) != START_ACK);

}

void I2C_Repeated_Start(void)
{
	/*Generate Repeated Start Condition*/
	/*SET_BIT(TWCR , 5);

	SET_BIT(TWCR , 7);
	SET_BIT(TWCR , 2);*/

	TWCR = (1<<7) | (1<< 5) | (1<<2);

	while(GET_BIT(TWCR,7) == 0);

	while((TWSR & 0XF8) != REP_START_ACK);
}

void I2C_SendSlaveAddress_Write(uint8 addr)
{
	TWDR = (addr << 1);

	/*SET_BIT(TWCR , 7);
	SET_BIT(TWCR , 2);*/
	TWCR = (1<<7) | (1<<2);

	while(GET_BIT(TWCR,7) == 0);

	while((TWSR & 0XF8) != SLAVE_ADD_AND_WR_ACK);

}

void I2C_SendSlaveAddress_Read(uint8 addr)
{
	TWDR = (addr << 1) | (0x01);

	/*SET_BIT(TWCR , 7);
	SET_BIT(TWCR , 2);*/
	TWCR = (1<<7) | (1<<2);

	while(GET_BIT(TWCR,7) == 0);

	while((TWSR & 0XF8) != SLAVE_ADD_AND_RD_ACK);
}

void I2C_Send_Data(uint8 data)
{
	TWDR  = data;

	/*SET_BIT(TWCR , 7);
	SET_BIT(TWCR , 2);*/
	TWCR = (1<<7) | (1<<2);

	while(GET_BIT(TWCR,7) == 0);

	while((TWSR & 0XF8) != WR_BYTE_ACK);

}

uint8 I2C_Read_Data(void)
{

	/*SET_BIT(TWCR , 7);
	SET_BIT(TWCR , 2);*/
	TWCR = (1<<7) | (1<<2);

	while(GET_BIT(TWCR,7) == 0);


	return TWDR;
}

void I2C_Stop_Condition(void)
{

	/*Generate Stop Condition*/
	/*SET_BIT(TWCR , 4);

	SET_BIT(TWCR , 7);
	SET_BIT(TWCR , 2);*/
	TWCR =(1<<7) | (1<< 4) | (1<<2);

}
