/*
 * main.c
 *
 *  Created on: Sep 19, 2023
 *      Author: FORMAT
 */
#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRA = 0b00001111;

	while(1)
	{

		//PORTA= 0b00000001;
			//_delay_ms(2000);
			//PORTA=0;
			//_delay_ms(2000);
		PORTA=0b00000001;
	for(int i=0; i<4; i++)
	{

		_delay_ms(250);
		PORTA <<= 1;

	}
	}

}
