/*
 * ex1.c
 *
 *  Created on: Sep 13, 2025
 *      Author: Lenovo
 */
#include "ex1.h"
int hour = 0,
	minute = 0,
	second = 0;
uint16_t LED[12] =
{
	GPIO_PIN_4,
	GPIO_PIN_5,
	GPIO_PIN_6,
	GPIO_PIN_7,
	GPIO_PIN_8,
	GPIO_PIN_9,
	GPIO_PIN_10,
	GPIO_PIN_11,
	GPIO_PIN_12,
	GPIO_PIN_13,
	GPIO_PIN_14,
	GPIO_PIN_15

};
void clearAllClock()
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14 , SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15 , SET);
}
void setNumberOnClock(int num)
{
	HAL_GPIO_WritePin(GPIOA, LED[num], RESET);
}
void clearNumberOnClock(int num)
{
	HAL_GPIO_WritePin(GPIOA, LED[num], SET);
}
void ex10_run(){
	if (second >= 60)
		{
			second = 0;
			minute++;
		}
		if (minute >= 60)
		{
			minute = 0;
			hour++;
		}
		if (hour >= 12)
		{
			hour = 0;
		}
		clearAllClock();
		setNumberOnClock(hour);
		setNumberOnClock(minute/5);
		setNumberOnClock(second/5);
		second++;
}

