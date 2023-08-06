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
	uint8_t nameArray[] = { 	ASCII_UPPER_D,
								ASCII_UPPER_E,
								ASCII_UPPER_F,
								ASCII_UPPER_C,
								ASCII_UPPER_O,
								ASCII_UPPER_N,
								ASCII_THREE,
								ASCII_ONE,
								ASCII_EXCLAMATION_MARK,
								ASCII_SPACE
	};

	screen_show_letter( nameArray[index] );

	index++;
	if(index >= arrayLength)
		index = 0;

	HAL_Delay(1);
}

void anim_nameKitty_run()
{
	static uint8_t index = 0;
	uint8_t arrayLength = 9;
	uint8_t nameArray[] = { 	ASCII_UPPER_R,
								ASCII_UPPER_A,
								ASCII_UPPER_W,
								ASCII_UPPER_R,
								ASCII_EXCLAMATION_MARK,
								ASCII_SPACE,
								ASCII_CIRCUMFLEX,
								ASCII_DOT,
								ASCII_CIRCUMFLEX
	};

	screen_show_letter( nameArray[index] );

	index++;
	if(index >= arrayLength)
		index = 0;

	HAL_Delay(1);
}

