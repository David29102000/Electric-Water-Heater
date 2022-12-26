/*
 * TIMER0.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include "Register_addresses.h"
#include "DIO.h"
#include "TIMER.h"

uint32 Number_OVF =0 ;
uint8 INIAL_VALUE = 0;

void TIMER0_Start(void)
{
	TCCR0 |= 0x05;

}
void TIMER0_Stop(void)
{
	CLR_BIT(TCCR0,0);
	CLR_BIT(TCCR0,1);
	CLR_BIT(TCCR0,2);
}

void TIMER0_Delay_ms(uint8 delay)
{
	uint8 Tick_Time = (1024 / 16) ;

	uint32 Total_Ticks = (delay * 1000) / Tick_Time ;

	Number_OVF = Total_Ticks / 256 ;

	INIAL_VALUE  =   256 - (Total_Ticks % 256) ;

	TCNT0 = INIAL_VALUE ;

	Number_OVF++;

}
void TIMER0_Init()
{

	TCCR0 |= 0x00;
	TIMSK |= 0X01;
	SREG |= 0X80;

}

void TIMER1_Init(void)
{
	TCCR1B |= 0X08;
	TIMSK  |=0X10;
	SREG   |=0X80;

}

void TIMER1_Start(void)
{
	TCCR1B |=0X05;
}
void TIMER1_Stop(void)
{
	CLR_BIT(TCCR1B,0);
	CLR_BIT(TCCR1B,1);
	CLR_BIT(TCCR1B,2);
}
void TIMER1_Delay_ms(uint8 delay)
{
	if (delay<=4000)
	{
		uint8 tick_time = 1024/8;
		uint8 num_ticks = ((delay*1000)/tick_time);
		OCR1A = num_ticks - 1;



	}
}
