/*
 * 7S.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#include "SEVEN_SEGMENT.h"

/****************SEVEN_SEGMENT_INIT**********************/
void SS_Init (void)
{
	SET_BIT(DDRA,4);
	SET_BIT(DDRA,5);
	SET_BIT(DDRA,6);
	SET_BIT(DDRA,7);

	SET_BIT(DDRB,4);
	SET_BIT(DDRB,5);
	SET_BIT(DDRB,6);
	SET_BIT(DDRB,7);

}


/**********SEVEN_SEGMENT_DISPLAY_CURRENT_TEMP*************/
void SS_display_Temp (uint8 Temp)
{
	uint8 right ;
	uint8 left ;

	right = Temp % 10 ;
	left = (int)Temp / 10 ;


	switch (right)
	{
			case 0 : PORTB = ( 0X00 ) | (PORTB & 0x0F);
			break;

			case 1 : PORTB = ( 0X10 ) | (PORTB & 0x0F);
			break;

			case 2 : PORTB = ( 0X20 ) | (PORTB & 0x0F);

			break;

			case 3 : PORTB = ( 0X30 ) | (PORTB & 0x0F);

			break;

			case 4 : PORTB = ( 0X40 ) | (PORTB & 0x0F);

			break;

			case 5 : PORTB = ( 0X50 ) | (PORTB & 0x0F);

			break;

			case 6 : PORTB = ( 0X60 ) | (PORTB & 0x0F);

			break;

			case 7 : PORTB = ( 0X70 ) | (PORTB & 0x0F);

			break;

			case 8 : PORTB = ( 0X80 ) | (PORTB & 0x0F);

			break;

			case 9 : PORTB = ( 0X90 ) | (PORTB & 0x0F);

			break;

	default : ;


	}



	switch (left)
		{
		case 0 : PORTA = ( 0X00 ) | (PORTA & 0x0F);
		break;

		case 1 : PORTA = ( 0X10 ) | (PORTA & 0x0F);
		break;

		case 2 : PORTA = ( 0X20 ) | (PORTA & 0x0F);

		break;

		case 3 : PORTA = ( 0X30 ) | (PORTA & 0x0F);

		break;

		case 4 : PORTA = ( 0X40 ) | (PORTA & 0x0F);

		break;

		case 5 : PORTA = ( 0X50 ) | (PORTA & 0x0F);

		break;

		case 6 : PORTA = ( 0X60 ) | (PORTA & 0x0F);

		break;

		case 7 : PORTA = ( 0X70 ) | (PORTA & 0x0F);

		break;

		case 8 : PORTA = ( 0X80 ) | (PORTA & 0x0F);

		break;

		case 9 : PORTA = ( 0X90 ) | (PORTA & 0x0F);

		break;

		default : ;


		}

}







/**********SEVEN_SEGMENT_DISPLAY_DESIRED_TEMP*************/
void SS_display_desired_Temp (uint8 Desired_Temp)
{
	uint8 right ;
	uint8 left ;

	right = Desired_Temp % 10 ;
	left = (int)Desired_Temp / 10 ;


	switch (right)
	{
			case 0 : PORTB = ( 0X00 ) | (PORTB & 0x0F);
			break;

			case 1 : PORTB = ( 0X10 ) | (PORTB & 0x0F);
			break;

			case 2 : PORTB = ( 0X20 ) | (PORTB & 0x0F);

			break;

			case 3 : PORTB = ( 0X30 ) | (PORTB & 0x0F);

			break;

			case 4 : PORTB = ( 0X40 ) | (PORTB & 0x0F);

			break;

			case 5 : PORTB = ( 0X50 ) | (PORTB & 0x0F);

			break;

			case 6 : PORTB = ( 0X60 ) | (PORTB & 0x0F);

			break;

			case 7 : PORTB = ( 0X70 ) | (PORTB & 0x0F);

			break;

			case 8 : PORTB = ( 0X80 ) | (PORTB & 0x0F);

			break;

			case 9 : PORTB = ( 0X90 ) | (PORTB & 0x0F);

			break;

	default : ;


	}



	switch (left)
		{
		case 0 : PORTA = ( 0X00 ) | (PORTA & 0x0F);
		break;

		case 1 : PORTA = ( 0X10 ) | (PORTA & 0x0F);
		break;

		case 2 : PORTA = ( 0X20 ) | (PORTA & 0x0F);

		break;

		case 3 : PORTA = ( 0X30 ) | (PORTA & 0x0F);

		break;

		case 4 : PORTA = ( 0X40 ) | (PORTA & 0x0F);

		break;

		case 5 : PORTA = ( 0X50 ) | (PORTA & 0x0F);

		break;

		case 6 : PORTA = ( 0X60 ) | (PORTA & 0x0F);

		break;

		case 7 : PORTA = ( 0X70 ) | (PORTA & 0x0F);

		break;

		case 8 : PORTA = ( 0X80 ) | (PORTA & 0x0F);

		break;

		case 9 : PORTA = ( 0X90 ) | (PORTA & 0x0F);

		break;

		default : ;


		}

}






/********************SEVEN_SEGMENT_TurnOff**********************/
void SS_TurnOff ()
{
	CLR_BIT(DDRA,4);
	CLR_BIT(DDRA,5);
	CLR_BIT(DDRA,6);
	CLR_BIT(DDRA,7);

	CLR_BIT(DDRB,4);
	CLR_BIT(DDRB,5);
	CLR_BIT(DDRB,6);
	CLR_BIT(DDRB,7);
}
