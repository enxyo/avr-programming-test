/*
 * avr-programming-test.c
 *
 * Created: 14.02.2019 14:22:59
 * Author : enxyo
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int i=4;

void d_eight(int digit)
{
	if(digit == 1)
	{
		// set not wanted digits low
		PORTC &= ~(1 << PC5);
		PORTB &= ~(1 << PB7);
		PORTD &= ~(1 << PD3);
		// set selected digit high
		PORTB |= (1 << PB6);
		
		// A1
		PORTC |= (1 << PC3);
		// B1
		PORTC |= (1 << PC1);
		// C1
		PORTD |= (1 << PD2);
		// D1
		PORTB |= (1 << PB0);
		// E1
		PORTD |= (1 << PD7);
		// F1
		PORTC |= (1 << PC2);
		// G1
		PORTC |= (1 << PC4);
	}
	if (digit == 2)
	{
		// set not wanted digits low
		PORTC &= ~(1 << PC5);
		PORTD &= ~(1 << PD3);
		PORTB &= ~(1 << PB6);
		// set selected digit high
		PORTB |= (1 << PB7);
		
		// A2
		PORTB |= (1 << PB2);	
		// B2
		PORTD |= (1 << PD1);	
		// C2
		PORTD |= (1 << PD4);	
		// D2
		PORTD |= (1 << PD5);
		// E2
		PORTD |= (1 << PD6);	
		// F2
		PORTD |= (1 << PD0);
		// G2
		PORTC |= (1 << PC0);
	}
	if (digit == 3)
	{
		// set not wanted digits low
		PORTC &= ~(1 << PC5);
		PORTB &= ~(1 << PB7);
		PORTD &= ~(1 << PB6);
		// set selected digit high
		PORTB |= (1 << PD3);
		
		// A1
		PORTC |= (1 << PC3);
		// B1
		PORTC |= (1 << PC1);
		// C1
		PORTD |= (1 << PD2);
		// D1
		PORTB |= (1 << PB0);
		// E1
		PORTD |= (1 << PD7);
		// F1
		PORTC |= (1 << PC2);
		// G1
		PORTC |= (1 << PC4);
	}
	if (digit == 4)
	{
		// set not wanted digits low
		PORTB &= ~(1 << PB7);
		PORTD &= ~(1 << PD3);
		PORTB &= ~(1 << PB6);
		// set selected digit high
		PORTC |= (1 << PC5);
		
		// A2
		PORTB |= (1 << PB2);
		// B2
		PORTD |= (1 << PD1);
		// C2
		PORTD |= (1 << PD4);
		// D2
		PORTD |= (1 << PD5);
		// E2
		PORTD |= (1 << PD6);
		// F2
		PORTD |= (1 << PD0);
		// G2
		PORTC |= (1 << PC0);
	}
}

void resetModuleOneDigitOne ()
{
	// set not wanted digits low
	PORTC &= ~(1 << PC5);
	PORTB &= ~(1 << PB7);
	PORTD &= ~(1 << PD3);
	// set selected digit high
	PORTB |= (1 << PB6);
	
	// A1
	PORTC &= ~(1 << PC3);
	// B1
	PORTC &= ~(1 << PC1);
	// C1
	PORTD &= ~(1 << PD2);
	// D1
	PORTB &= ~(1 << PB0);
	// E1
	PORTD &= ~(1 << PD7);
	// F1
	PORTC &= ~(1 << PC2);
	// G1
	PORTC &= ~(1 << PC4);
}

int main(void)
{
	/* Ausg�nge setzen. */
	DDRC |= (1 << PC5); // 1. Modul 2. Ziffer
	DDRB |= (1 << PB7); // 2. Modul 2. Ziffer
	DDRD |= (1 << PD3); // 1. Modul 1. Ziffer
	DDRB |= (1 << PB6); // 2. Modul 1. Ziffer

	DDRB |= (1 << PB2); // A2
	DDRD |= (1 << PD1); // B2
	DDRD |= (1 << PD4); // C2
	DDRD |= (1 << PD5); // D2
	DDRD |= (1 << PD6); // E2
	DDRD |= (1 << PD0); // F2
	DDRC |= (1 << PC0); // G2
	
	DDRC |= (1 << PC3); // A1
	DDRC |= (1 << PC1); // B1
	DDRD |= (1 << PD2); // C1
	DDRB |= (1 << PB0); // D1
	DDRD |= (1 << PD7); // E1
	DDRC |= (1 << PC2); // F1
	DDRC |= (1 << PC4); // G1
	
	while (1)
	{
		//resetModuleOneDigitOne();
		//_delay_ms(500);
		d_eight(1);
		d_eight(2);
		d_eight(3);
		d_eight(4);
		//_delay_ms(500);
	}
	
	/*
	while(1)
	{
		// Modul 2 Ziffer 2
		while(i==1)
		{
			PORTC |= (1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			
			// A2
			PORTB |= (1 << PB2);
			_delay_ms(500);
			PORTB &= ~(1 << PB2);
			_delay_ms(500);
			
			// B2
			PORTD |= (1 << PD1);
			_delay_ms(500);
			PORTD &= ~(1 << PD1);
			_delay_ms(500);
						
			// C2
			PORTD |= (1 << PD4);
			_delay_ms(500);
			PORTD &= ~(1 << PD4);
			_delay_ms(500);
			
			// D2
			PORTD |= (1 << PD5);
			_delay_ms(500);
			PORTD &= ~(1 << PD5);
			_delay_ms(500);
			
			// E2
			PORTD |= (1 << PD6);
			_delay_ms(500);
			PORTD &= ~(1 << PD6);
			_delay_ms(500);
			
			// F2
			PORTD |= (1 << PD0);
			_delay_ms(500);
			PORTD &= ~(1 << PD0);
			_delay_ms(500);
			
			// G2
			PORTC |= (1 << PC0);
			_delay_ms(500);
			PORTC &= ~(1 << PC0);
			_delay_ms(500);
			
			i++;
		};
		
		// Modul 1 Ziffer 2
		while(i==2)
		{
			PORTC &= ~(1 << PC5);
			PORTB |= (1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			
			// A2
			PORTB |= (1 << PB2);
			_delay_ms(500);
			PORTB &= ~(1 << PB2);
			_delay_ms(500);
						
			// B2
			PORTD |= (1 << PD1);
			_delay_ms(500);
			PORTD &= ~(1 << PD1);
			_delay_ms(500);
			
			// C2
			PORTD |= (1 << PD4);
			_delay_ms(500);
			PORTD &= ~(1 << PD4);
			_delay_ms(500);
			
			// D2
			PORTD |= (1 << PD5);
			_delay_ms(500);
			PORTD &= ~(1 << PD5);
			_delay_ms(500);
			
			// E2
			PORTD |= (1 << PD6);
			_delay_ms(500);
			PORTD &= ~(1 << PD6);
			_delay_ms(500);
			
			// F2
			PORTD |= (1 << PD0);
			_delay_ms(500);
			PORTD &= ~(1 << PD0);
			_delay_ms(500);
			
			// G2
			PORTC |= (1 << PC0);
			_delay_ms(500);
			PORTC &= ~(1 << PC0);
			_delay_ms(500);
			
			i++;
		};
		
		// Modul 2 Ziffer 1
		while(i==3)
		{
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD |= (1 << PD3);
			PORTB &= ~(1 << PB6);
			
			
			// A1
			PORTC |= (1 << PC3);
			_delay_ms(500);
			PORTC &= ~(1 << PC3);
			_delay_ms(500);
			
			// B1
			PORTC |= (1 << PC1);
			_delay_ms(500);
			PORTC &= ~(1 << PC1);
			_delay_ms(500);
			
			// C1
			PORTD |= (1 << PD2);
			_delay_ms(500);
			PORTD &= ~(1 << PD2);
			_delay_ms(500);
			
			// D1
			PORTB |= (1 << PB0);
			_delay_ms(500);
			PORTB &= ~(1 << PB0);
			_delay_ms(500);
			
			// E1
			PORTD |= (1 << PD7);
			_delay_ms(500);
			PORTD &= ~(1 << PD7);
			_delay_ms(500);
			
			// F1
			PORTC |= (1 << PC2);
			_delay_ms(500);
			PORTC &= ~(1 << PC2);
			_delay_ms(500);
			
			// G1
			PORTC |= (1 << PC4);
			_delay_ms(500);
			PORTC &= ~(1 << PC4);
			_delay_ms(500);
			
			i++;
		};
		
		// Modul 1 Ziffe 1
		while(i==4)
		{
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB |= (1 << PB6);
			
			
			// A1
			PORTC |= (1 << PC3);
			_delay_ms(500);
			PORTC &= ~(1 << PC3);
			_delay_ms(500);

			// B1
			PORTC |= (1 << PC1);
			_delay_ms(500);
			PORTC &= ~(1 << PC1);
			_delay_ms(500);
			
			// C1
			PORTD |= (1 << PD2);
			_delay_ms(500);
			PORTD &= ~(1 << PD2);
			_delay_ms(500);
						
			// D1
			PORTB |= (1 << PB0);
			_delay_ms(500);
			PORTB &= ~(1 << PB0);
			_delay_ms(500);
			
			// E1
			PORTD |= (1 << PD7);
			_delay_ms(500);
			PORTD &= ~(1 << PD7);
			_delay_ms(500);
			
			// F1
			PORTC |= (1 << PC2);
			_delay_ms(500);
			PORTC &= ~(1 << PC2);
			_delay_ms(500);
			
			// G1
			PORTC |= (1 << PC4);
			_delay_ms(500);
			PORTC &= ~(1 << PC4);
			_delay_ms(500);
			
			//i=1;
		};
	
	};
	*/
	
}
