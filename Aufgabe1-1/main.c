/*
 * Aufgabe1-1.c
 *
 * Created: 30.11.2017 14:18:04
 * Author : st101648
 */ 

#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
		DDRB=0x02;
		
		DDRD=0x00;
		PORTD=0x0C;
		
		
    /* Replace with your application code */
    while (1) 
    {
	
	if ((PIND&0x08)==0)
		{
			PORTB=0x02;
			_delay_ms(100);
			PORTB=0x00;
			_delay_ms(100);
		}
	else
	{		PORTB=0x02;
		_delay_ms(250);
		PORTB=0x00;		
		_delay_ms(250);
    }
}
}

