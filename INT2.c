/*
 * INT2.c
 *
 *  Created on: Oct 24, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#include "INT2.h"

#if MODE == 1

void INT2_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #2.
	GICR  |= (1<<INT2);
	// Select Mode
	// ISC2 is initially zero.
}

#endif

#if MODE == 2

void INT2_INIT (void)
{
	// Enable General interrupts.
	sei();
	// Enable External interrupt #1.
	GICR  |= (1<<INT2);
	// Select Mode
	MCUCSR |= (1<<ISC2);
}

#endif
