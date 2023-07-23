/*
 * anim_vertical.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Lam
 */

#include "screenBuffer.h"

void anim_vertical_run()
{
	static uint8_t currCol = 0;
	for(int i=0; i<8; i++)
	{
		screen_set_bit(i, currCol, 1);
	}

	currCol++;
	if(currCol == 8)
		currCol = 0;

	HAL_Delay(25);
	screen_clear();
}

void anim_horizontal_run()
{
	static uint8_t currRow = 0;
	for(int i=0; i<8; i++)
	{
		screen_set_bit(currRow, i, 1);
	}

	currRow++;
	if(currRow == 8)
		currRow = 0;

	HAL_Delay(25);
	screen_clear();
}


void anim_diagonal_run()
{
	static uint8_t shifting = 0;
	static uint8_t currIndex = 0;
	for(int i=0; i<8; i++)
	{
		screen_set_bit(currIndex+shifting, i, 1);

		currIndex++;
		if(currIndex >= 8)
			currIndex = 0;
	}

	shifting++;
	if(shifting >= 8)
		shifting = 0;

	HAL_Delay(25);
	screen_clear();
}

#define SWIPEALL_ANIM1 16
#define SWIPEALL_ANIM2 32
#define SWIPEALL_ANIM3 48
void anim_swipeAll_run()
{
	static uint8_t counter = 0;
	if(counter < SWIPEALL_ANIM1)
	{
		anim_vertical_run();
	}
	else if(counter >= SWIPEALL_ANIM1 && counter < SWIPEALL_ANIM2)
	{
		anim_horizontal_run();
	}
	else
	{
		anim_diagonal_run();
	}

	counter++;
	if(counter > SWIPEALL_ANIM3)
	{
		counter=0;
	}

}
