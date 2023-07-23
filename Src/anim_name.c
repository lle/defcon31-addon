/*
 * anim_name.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Lam
 */

#include "screenBuffer.h"
#include "ascii_letter.h"

void anim_name_run()
{
	static uint8_t index = 0;
	uint8_t arrayLength = 10;
	uint8_t nameArray[] = { 	ASCII_UPPER_L,
								ASCII_UPPER_A,
								ASCII_UPPER_M,
								ASCII_UPPER_B,
								ASCII_UPPER_E,
								ASCII_UPPER_R,
								ASCII_UPPER_T,
								ASCII_SPACE,
								ASCII_DOT,
								ASCII_SPACE
	};

	screen_show_letter( nameArray[index] );

	index++;
	if(index >= arrayLength)
		index = 0;

	HAL_Delay(250);
}

void anim_nameKitty_run()
{
	static uint8_t index = 0;
	uint8_t arrayLength = 9;
	uint8_t nameArray[] = { 	ASCII_UPPER_K,
								ASCII_UPPER_I,
								ASCII_UPPER_T,
								ASCII_SPACE,
								ASCII_UPPER_T,
								ASCII_UPPER_Y,
								ASCII_CIRCUMFLEX,
								ASCII_DOT,
								ASCII_CIRCUMFLEX
	};

	screen_show_letter( nameArray[index] );

	index++;
	if(index >= arrayLength)
		index = 0;

	HAL_Delay(250);
}

