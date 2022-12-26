/*
 * main.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/io.h>

#include "../HALL/COOLING_SYSTEM.h"
#include "../HALL/HEATING_SYSTEM.h"
#include "../HALL/BUTTONS.h"
#include "../MCAL/interrupt_enable.h"
#include "../HALL/LM35.h"
#include "../HALL/PROTOCOL.h"


uint8 temp;
uint16 desired_temp=60;
uint8 FIRST_PRESS=0;
uint8 system_on_flag;
uint8 start=1;


int main()
{

/******************************************SYSTEM INTERRUPTS***********************************/
    INITIALIZING_THE_SYSTEM();                    // INITIALIZE INTERRUPTS SENSOR AND EEPROM
    SET_CALLBACK_DEC(DECREASING_THE_TEMPREATURE); //INTERRUPT TO DECREASE TEMP
    SET_CALLBACK_INC(INCREASING_THE_TEMPREATURE); //INTERRUPT TO INCREASE TEMP
    SET_CALLBACK_SHUT(SHUTTING_DOWN);             //INTERRUPT TO SHUTDOWN THE SYSTEM
    GET_DESIRED_TEMP_FROM_EEPROM();
/**********************************************************************************************/
	while (1)
	{
    ON_SYSTEM_BUTTON();             // WAIT FOR ON TO BE PRESSED
    if (system_on_flag==1)
    {
    SENSOR_READING();               //WHILE SYSTEM IS ON READ FORM THE SENSOR AND DISPLAY TEMP ON 7SEG
    TEMPREATURE_MANAGMENT();        // MANAGE TO HEAT OR COOL TEMP BASED ON CURRENT READING AND DESIRED TEMP
	}
    else
    {
    SHUT_DOWN();                    // IF OFF BUTTON IS PRESSED SYSTEM_ON_FLAG WILL BE 0 THEREFORE SHUTDOWN
    }
    TEMPREATURE_SETTING_MODE();     //BEGIN BLINKING AND SET THE DESIRED TEMP IF INC. OR DEC. BUTTONS ARE PRESSED
	}
}







