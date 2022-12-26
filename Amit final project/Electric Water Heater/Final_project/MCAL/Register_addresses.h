/*
 * Register_addresses.h
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */

#ifndef HALL_REGISTER_ADDRESSES_H_
#define HALL_REGISTER_ADDRESSES_H_

#define    PORTA    *((volatile uint8*) 0x3B)
#define    DDRA     *((volatile uint8*) 0x3A)
#define    PINA     *((volatile uint8*) 0x39)

#define    PORTB    *((volatile uint8*) 0x38)
#define    DDRB     *((volatile uint8*) 0x37)
#define    PINB     *((volatile uint8*) 0x36)

#define    PORTC    *((volatile uint8*) 0x35)
#define    DDRC     *((volatile uint8*) 0x34)
#define    PINC     *((volatile uint8*) 0x33)

#define    PORTD    *((volatile uint8*) 0x32)
#define    DDRD     *((volatile uint8*) 0x31)
#define    PIND     *((volatile uint8*) 0x30)

/*******************EXT INTERRUPT*************/


#define SREG   *((volatile unsigned char*)0x5F)

#define GICR   *((volatile unsigned char*)0x5B)

#define GIFR   *((volatile unsigned char*)0x5A)

#define MCUCR   *((volatile unsigned char*)0x55)

#define MCUSCR   *((volatile unsigned char*)0x54)

/*******************Timer0*************/

#define TCNT0   *((volatile unsigned char*)0x52)

#define TCCR0   *((volatile unsigned char*)0x53)

#define TIFR   *((volatile unsigned char*)0x58)

#define TIMSK   *((volatile unsigned char*)0x59)

#define OCR0   *((volatile unsigned char*)0x5C)

/*******************Timer1*************/

#define TCCR1A   *((volatile unsigned char*)0x4F)

#define TCCR1B   *((volatile unsigned char*)0x4E)

#define OCR1A   *((volatile uint16*)0x4A)

#define ICR1    *((volatile uint16*)0x46)



#define TCCR2   *((volatile unsigned char*)0x45)

#define OCR2   *((volatile unsigned char*)0x43)



/*******************ADC*************/


#define ADMUX           (*(volatile uint8 *)(0x27))
#define ADCSRA          (*(volatile uint8 *)(0x26))
#define ADCH            (*(volatile uint8 *)(0x25))
#define ADCL            (*(volatile uint8 *)(0x24))
#define ADC_ADJUST      (*(volatile uint16 *)(0x24))


/*******************UART*************/

#define UCSRA            (*(volatile uint8 *)(0x2B))

#define UCSRB            (*(volatile uint8 *)(0x2A))

#define UDR              (*(volatile uint8 *)(0x2C))

#define UBRRL            (*(volatile uint8 *)(0x29))

#define UBRRH            (*(volatile uint8 *)(0x40))

#define UCSRC            (*(volatile uint8 *)(0x40))

/*******************I2C*************/

#define TWDR            (*(volatile uint8 *)(0x23))

#define TWAR            (*(volatile uint8 *)(0x22))

#define TWSR            (*(volatile uint8 *)(0x21))

#define TWBR            (*(volatile uint8 *)(0x20))


#define TWCR            (*(volatile uint8 *)(0x56))

/*******************WD*************/

#define WDTCR            (*(volatile uint8 *)(0x41))

/*******************SPI*************/




#endif /* HALL_REGISTER_ADDRESSES_H_ */
