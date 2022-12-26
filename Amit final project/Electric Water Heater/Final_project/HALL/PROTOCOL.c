/*
 * PROTOCOL.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include "PROTOCOL.h"
extern uint8 desired_temp;
extern uint8 temp;
extern uint8 start;
extern uint8 FIRST_PRESS;
extern uint8 system_on_flag;


void INITIALIZING_THE_SYSTEM(void)
{
	ENABLE_INTERRUPTS();
	lm35_Init();
	EEPROM_Init();

}

void SENSOR_READING(void)
{
    temp=lm35_average();
    SS_Init();
    SS_display_Temp(temp);
}

void HEATING_THE_SYSTEM(void)
{
	heating_system_enable();
	cooling_system_disable();
}
void COOLING_THE_SYSTEM(void)
{
   	heating_system_disable();
    cooling_system_enable();
}
void SHUT_DOWN(void)
{
	cooling_system_disable();
	heating_system_disable();
	SS_TurnOff();
}
void BLINKING_DISPLAY(void)
{
	SS_TurnOff();
	_delay_ms(50);
	SS_Init();
	SS_display_Temp(desired_temp);
	_delay_ms(50);
}

void TEMPREATURE_MANAGMENT(void)
{
    if (temp<=desired_temp-5)
    {
    HEATING_THE_SYSTEM();
    }
    else if (temp>=desired_temp+5)
    {
    COOLING_THE_SYSTEM();
    }
    else
    {
    }
}

void GET_DESIRED_TEMP_FROM_EEPROM(void)
{
    if (start==1)
    {
	//desired_temp = EEPROM_READ(0X00);  /*RETRIEVE THE VALUE STORED DURING SHUTDOWN*/
	start=0;
    }
    else
    {
    }
}
void TEMPREATURE_SETTING_MODE(void)
{
    if (FIRST_PRESS==1)                // FIRST PRESS WILL ENABLE THE BLINKING
    {
    BLINKING_DISPLAY();
    }
    else
    {
	}

}
void DECREASING_THE_TEMPREATURE(void)
{
	if (FIRST_PRESS==1)
	{
	DECREASE_TEMPREATURE_BUTTON(&desired_temp);
	SS_Init();
	SS_display_Temp(desired_temp);
	_delay_ms(2000);
	FIRST_PRESS=0;

	}
	else
	{
		FIRST_PRESS=1;

	}


}

void INCREASING_THE_TEMPREATURE(void)
{
	if (FIRST_PRESS==1)
	{
	INCREASE_TEMPREATURE_BUTTON(&desired_temp);
	SS_Init();
	SS_display_Temp(desired_temp);
	_delay_ms(2000);

	FIRST_PRESS=0;

	}
	else
	{
	FIRST_PRESS=1;

	}

}
void SHUTTING_DOWN(void)
{
	EEPROM_WRITE(0X00,desired_temp);
	system_on_flag=0;
	start=1;
}

