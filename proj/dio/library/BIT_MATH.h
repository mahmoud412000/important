/*
 * BIT_MATH.h
 *
 *  Created on: Sep 2, 2023
 *      Author: FORMAT
 */


#ifndef BIT_MATH_H
#define BIT_MATH_H


#define SET_BIT(VAR,BITNO)     (VAR)|=(1<<(BINNO))
#define CLR_BIT(VAR,BITNO)     (VAR)&=(1<<(BITNO))
#define TOG_BIT(VAR,BITNO)     (VAR)^=(1<<(BITNO))
#define GET_BIT(VAR,BITNO)     (((VAR)>>(BITNO))&0X01)


#endif
