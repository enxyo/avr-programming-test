/*
 * avr-programming-test.c
 *
 * Created: 14.02.2019 14:22:59
 * Author : enxyo
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int i=4;

void d_eight(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTC |= (1 << PC1); // B1
		PORTD |= (1 << PD2); // C1
		PORTB |= (1 << PB0); // D1
		PORTD |= (1 << PD7); // E1
		PORTC |= (1 << PC2); // F1
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD4); // C2
		PORTD |= (1 << PD5); // D2
		PORTD |= (1 << PD6); // E2
		PORTD |= (1 << PD0); // F2
		PORTC |= (1 << PC0); // G2
	}
}

void d_one(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC1); // B1
		PORTD |= (1 << PD2); // C1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}

		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD4); // C2
	}
}

void d_two(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTC |= (1 << PC1); // B1
		PORTB |= (1 << PB0); // D1
		PORTD |= (1 << PD7); // E1
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD5); // D2
		PORTD |= (1 << PD6); // E2
		PORTC |= (1 << PC0); // G2
	}
}

void d_three(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTC |= (1 << PC1); // B1
		PORTD |= (1 << PD2); // C1
		PORTB |= (1 << PB0); // D1
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD4); // C2
		PORTD |= (1 << PD5); // D2
		PORTC |= (1 << PC0); // G2
	}
}

void d_four(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC1); // B1
		PORTD |= (1 << PD2); // C1
		PORTC |= (1 << PC2); // F1
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD4); // C2
		PORTD |= (1 << PD0); // F2
		PORTC |= (1 << PC0); // G2
	}
}

void d_five(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTD |= (1 << PD2); // C1
		PORTB |= (1 << PB0); // D1
		PORTC |= (1 << PC2); // F1
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD4); // C2
		PORTD |= (1 << PD5); // D2
		PORTD |= (1 << PD0); // F2
		PORTC |= (1 << PC0); // G2
	}
}

void d_six(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTD |= (1 << PD2); // C1
		PORTB |= (1 << PB0); // D1
		PORTD |= (1 << PD7); // E1
		PORTC |= (1 << PC2); // F1
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD4); // C2
		PORTD |= (1 << PD5); // D2
		PORTD |= (1 << PD6); // E2
		PORTD |= (1 << PD0); // F2
		PORTC |= (1 << PC0); // G2
	}
}

void d_seven(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTC |= (1 << PC1); // B1
		PORTD |= (1 << PD2); // C1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD4); // C2
	}
}

void d_nine(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTC |= (1 << PC1); // B1
		PORTD |= (1 << PD2); // C1
		PORTC |= (1 << PC2); // F1
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD4); // C2
		PORTD |= (1 << PD0); // F2
		PORTC |= (1 << PC0); // G2
	}
}

void d_zero(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC3); // A1
		PORTC |= (1 << PC1); // B1
		PORTD |= (1 << PD2); // C1
		PORTB |= (1 << PB0); // D1
		PORTD |= (1 << PD7); // E1
		PORTC |= (1 << PC2); // F1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB |= (1 << PB2); // A2
		PORTD |= (1 << PD1); // B2
		PORTD |= (1 << PD4); // C2
		PORTD |= (1 << PD5); // D2
		PORTD |= (1 << PD6); // E2
		PORTD |= (1 << PD0); // F2
	}
}

void d_dash(int module, int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC |= (1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTC |= (1 << PC0); // G2
	}
}




void resetModuleDigit(int module,int digit)
{
	if (digit == 0)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			// set selected digit high
			PORTB |= (1 << PB6);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PD3);
		}
		
		PORTC &= ~(1 << PC3); // A1
		PORTC &= ~(1 << PC1); // B1
		PORTD &= ~(1 << PD2); // C1
		PORTB &= ~(1 << PB0); // D1
		PORTD &= ~(1 << PD7); // E1
		PORTC &= ~(1 << PC2); // F1
		PORTC &= ~(1 << PC4); // G1
	}
	if (digit == 1)
	{
		if (module == 0)
		{
			// set not wanted digits low
			PORTC &= ~(1 << PC5);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTB |= (1 << PB7);
		}
		if (module == 1)
		{
			// set not wanted digits low
			PORTB &= ~(1 << PB7);
			PORTD &= ~(1 << PD3);
			PORTB &= ~(1 << PB6);
			// set selected digit high
			PORTC |= (1 << PC5);
		}
		
		PORTB &= ~(1 << PB2); // A2
		PORTD &= ~(1 << PD1); // B2
		PORTD &= ~(1 << PD4); // C2
		PORTD &= ~(1 << PD5); // D2
		PORTD &= ~(1 << PD6); // E2
		PORTD &= ~(1 << PD0); // F2
		PORTC &= ~(1 << PC0); // G2
	}
}

void displayTest()
{
	for (int j=0; j<2; j++)
	{
		for (int k=0; k<2; k++)
		{
			d_dash(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_zero(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_one(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_two(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_three(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_four(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_five(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_six(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_seven(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_eight(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
			d_nine(j,k);
			_delay_ms(100);
			resetModuleDigit(j,k);
		}
	}
}

int main(void)
{
	/* Ausgänge setzen. */
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
		displayTest();
		
		/*
		d_eight(0,0);
		_delay_ms(100);
		resetModuleDigit(0,0);
		d_eight(0,1);
		_delay_ms(100);
		resetModuleDigit(0,1);
		d_eight(1,0);
		_delay_ms(100);
		resetModuleDigit(1,0);
		d_eight(1,1);
		_delay_ms(100);
		resetModuleDigit(1,1);
		*/
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

