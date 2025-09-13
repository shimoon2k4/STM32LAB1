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
	if(count_red == 2){
		count_green = 3;
		status = (status == 1) ? 2 : 4;
	}
	if(count_red == 0){
		count_yellow = 2;
		count_red = 5;
		status = (status == 2) ? 3 : 1;
	}
}
void ex3_run(){
	switch (status) {
	case 1:
		HAL_GPIO_WritePin(LED_RED_NS_GPIO_Port, LED_RED_NS_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_NS_GPIO_Port, LED_YELLOW_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_NS_GPIO_Port, LED_GREEN_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_EW_GPIO_Port, LED_RED_EW_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_EW_GPIO_Port, LED_YELLOW_EW_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_EW_GPIO_Port, LED_GREEN_EW_Pin, RESET);
		--count_red;
		--count_green;
	    break;
	case 2:
		HAL_GPIO_WritePin(LED_RED_NS_GPIO_Port, LED_RED_NS_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_NS_GPIO_Port, LED_YELLOW_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_NS_GPIO_Port, LED_GREEN_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_EW_GPIO_Port, LED_RED_EW_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_EW_GPIO_Port, LED_YELLOW_EW_Pin, RESET);
	    HAL_GPIO_WritePin(LED_GREEN_EW_GPIO_Port, LED_GREEN_EW_Pin, SET);
		--count_red;
		--count_yellow;
		break;
	case 3:
		HAL_GPIO_WritePin(LED_RED_NS_GPIO_Port, LED_RED_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_NS_GPIO_Port, LED_YELLOW_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_NS_GPIO_Port, LED_GREEN_NS_Pin, RESET);
		HAL_GPIO_WritePin(LED_RED_EW_GPIO_Port, LED_RED_EW_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_EW_GPIO_Port, LED_YELLOW_EW_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_EW_GPIO_Port, LED_GREEN_EW_Pin, SET);
		--count_red;
		--count_green;
		break;
	case 4:
		HAL_GPIO_WritePin(LED_RED_NS_GPIO_Port, LED_RED_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_NS_GPIO_Port, LED_YELLOW_NS_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_NS_GPIO_Port, LED_GREEN_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_EW_GPIO_Port, LED_RED_EW_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_EW_GPIO_Port, LED_YELLOW_EW_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_EW_GPIO_Port, LED_GREEN_EW_Pin, SET);
		--count_red;
		--count_yellow;
		break;

	}
	reset_and_change_states();
}



