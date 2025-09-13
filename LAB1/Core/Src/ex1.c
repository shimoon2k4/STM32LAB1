/*
 * ex1.c
 *
 *  Created on: Sep 13, 2025
 *      Author: Lenovo
 */
#include "ex1.h"
int count_red = 5,
    count_green = 3,
    count_yellow = 2,
    status = 1;
void reset_and_change_states(){
	if(count_red == 0){
		count_red = 5;
		status = 2;
	}
	if(count_yellow == 0){
			count_yellow = 2;
			status = 3;
	}
	if(count_green == 0){
			count_green = 3;
			status = 1;
	}
}
void ex2_run(){
	switch (status) {
	case 1:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	    HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	    --count_red;
	    break;
	case 2:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		--count_yellow;
		break;
	case 3:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
		--count_green;
	}
	reset_and_change_states();
}


