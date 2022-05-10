/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: hazem
 */

#include <avr/io.h>
#include <util/delay.h>

int main()
{
	/*set pin direction*/
	DDRA=0b11111111;
	/*set pin value*/

	while(1)
	{
		PORTA=0b11111111;
		_delay_ms(500);
		PORTA=0b00000000;
		_delay_ms(500);

	}

}

