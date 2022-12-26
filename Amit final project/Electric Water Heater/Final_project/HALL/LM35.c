/*
 * LM35.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include "LM35.h"
#define ADIF 4
#define ADSC 6

void lm35_Init()
{
	DDRA&=~(1<<0); //make PA0 an i/p for ADC
	ADCSRA =0x87; //make ADC enable and ck/128
	ADMUX=0xE0; //adc0 will be left justified
}
uint8 lm35_Read(uint8 data )
{
	 ADCSRA|=(1<<ADSC);
	 while((ADCSRA&(1<<ADIF))==0);
	 data=ADCH;
	 return data;

}
sint32 lm35_average()
{
	    sint32 temp_average;
	    uint8 i;
		sint32 sum=0;
		uint8 data;
		for(i=0;i<10;i++)
		{
			data=lm35_Read(data);
			sum+=data;
			_delay_ms(100);
		}
        temp_average=(sum/10);
		sum=0;
		return temp_average;
}
