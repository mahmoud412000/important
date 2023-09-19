/*
 * main.c
 *
 *  Created on: Sep 2, 2023
 *      Author: FORMAT
 */
#include "../library/STD_TYPES.h"
#include "../library/BIT_MATH.h"
#include"DIO_interface.h"
#include"DIO_register.h"
#include"DIO_config.h"
#include"DIO_private.h"

//************\\

uint8 DIO_SetPinDirection(uint8 copy_DIO_uint8Port,
		                  uint8 copy_DIO_uint8PinNumber,
						  uint8 copy_DIO_uint8PinDirection)
{
	uint8 LOCAL_DIO_uint8LOCALErrorState= false ;

	if(copy_DIO_uint8PinNumber > DIO_MAX_PINS)
	{
		LOCAL_DIO_uint8LocalErrorstate=true;

	}
	else
	{
		switch(copy_DIO_uint8Port)
		{
		case DIO_PORTA: SET_BIT(DDRA,copy_DIO_uint8PinNumber);break;
		case DIO_PORTB: SET_BIT(DDRB,copy_DIO_uint8PinNumber);break;
		case DIO_PORTC: SET_BIT(DDRC,copy_DIO_uint8PinNumber);break;
		case DIO_PORTD: SET_BIT(DDRD,copy_DIO_uint8PinNumber);break;
		defualt : Local_DIO_uint8LocalErrorState = true;

		}
	}
}


//****************************************************\\

void DIO_SetPinValue(uint8 copy_DIO_uint8Port,
		             uint8 copy_DIO_uint8pinNumber,
					 uint8 copy_DIO_uint8PinValue)
{
	uint8 LOCAL_DIO_uint8LOCALErrorState= false ;

	if(copy_DIO_uint8PinNumber > DIO_MAX_PINS)
	{
		LOCAL_DIO_uint8LocalErrorstate=true;

	}
	else
	{
		switch(copy_DIO_uint8Port)
		{
		case DIO_PORTA: SET_BIT(DDRA,copy_DIO_uint8PinNumber);break;
		case DIO_PORTB: SET_BIT(DDRB,copy_DIO_uint8PinNumber);break;
		case DIO_PORTC: SET_BIT(DDRC,copy_DIO_uint8PinNumber);break;
		case DIO_PORTD: SET_BIT(DDRD,copy_DIO_uint8PinNumber);break;
		defualt : Local_DIO_uint8LocalErrorState = true;

		}
	}
}
