/*
 * DIO.c
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */


#include "DIO.h"

void  DIO_SetPortDir(uint8 Port , uint8 Dir)
{
	switch(Port)
	{
		case DIO_PORTA :
		 DDRA = Dir;
		break;

		case DIO_PORTB :
		 DDRB = Dir;
		break;

		case DIO_PORTC :
		 DDRC = Dir;
		break;

		case DIO_PORTD :
		 DDRD = Dir;
		break;

		default:

		break;
	}
}

void  DIO_SetPinDir(uint8 Port ,uint8 Pin ,uint8 Dir)
{
	switch(Dir)
	{

	case DIO_PIN_OUTPUT :

		switch(Port)
		{
			case DIO_PORTA:
			SET_BIT(DDRA , Pin);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB , Pin);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC , Pin);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD , Pin);
			break;
			default:
			break;

		}

	break;

	case DIO_PIN_INPUT :

		switch(Port)
		{
			case DIO_PORTA:
			CLR_BIT(DDRA , Pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB , Pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC , Pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD , Pin);
			break;
			default:
			break;

		}

	break;

	default:
	break;


	}

}



void  DIO_SetPortVal(uint8 Port , uint8 Val)
{
		switch(Port)
		{
			case DIO_PORTA :
			PORTA = Val;
			break;

			case DIO_PORTB :
			PORTB = Val;
			break;

			case DIO_PORTC :
			PORTC = Val;
			break;

			case DIO_PORTD :
			PORTD = Val;
			break;

			default:

			break;
		}

}

void  DIO_SetPinVal(uint8 Port ,uint8 Pin ,uint8 Val)
{

	switch(Val)
	{
		case DIO_PIN_HIGH :

		switch(Port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA , Pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB , Pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC , Pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD , Pin);
			break;
			default:
			break;

		}


		break;

		case DIO_PIN_LOW:

			switch(Port)
			{
				case DIO_PORTA:
				CLR_BIT(PORTA , Pin);
				break;
				case DIO_PORTB:
				CLR_BIT(PORTB , Pin);
				break;
				case DIO_PORTC:
				CLR_BIT(PORTC , Pin);
				break;
				case DIO_PORTD:
				CLR_BIT(PORTD , Pin);
				break;
				default:
				break;

			}

		break;

		default:
		break;
	}

}


uint8  DIO_GetPortVal(uint8 Port)
{
	uint8 val = 0;

	switch(Port)
	{
		case DIO_PORTA :
		val = PINA;
		break;

		case DIO_PORTB :
		val = PINB;
		break;

		case DIO_PORTC :
		val = PINC;
		break;

		case DIO_PORTD :
		val = PIND;
		break;

		default:

		break;
	}

	return  val;

}


uint8  DIO_GetPinVal(uint8 Port ,uint8 Pin)
{
	uint8 val = 0;

	switch(Port)
	{
		case DIO_PORTA :
		val = GET_BIT(PINA,Pin);
		break;

		case DIO_PORTB :
		val = GET_BIT(PINB,Pin);
		break;

		case DIO_PORTC :
		val = GET_BIT(PINC,Pin);
		break;

		case DIO_PORTD :
		val = GET_BIT(PIND,Pin);
		break;

		default:
		break;

	}

	return val;

}

void DIO_TogllePin(uint8 Port ,uint8 Pin)
{

	switch(Port)
			{
				case DIO_PORTA :
				TOGGLE_BIT(PORTA,Pin);
				break;

				case DIO_PORTB :
				TOGGLE_BIT(PORTB,Pin);
				break;

				case DIO_PORTC :
				TOGGLE_BIT(PORTC,Pin);
				break;

				case DIO_PORTD :
					TOGGLE_BIT(PORTD,Pin);
				break;

				default:

				break;
			}
}


void DIO_SetPullUpRes(uint8 Port , uint8 Pin)
{

	switch (Port) {
		case DIO_PORTA:
			SET_BIT(PORTA,Pin);
			break;
		case DIO_PORTB:
			SET_BIT(PORTB,Pin);
					break;
		case DIO_PORTC:
			SET_BIT(PORTC,Pin);
					break;
		case DIO_PORTD:
			SET_BIT(PORTD,Pin);
					break;
		default:
			break;
	}


}
