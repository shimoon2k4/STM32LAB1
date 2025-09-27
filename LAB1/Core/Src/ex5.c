/*
 * ex1.c
 *
 *  Created on: Sep 13, 2025
 *      Author: Lenovo
 */
#include <ex5.h>
int counter = 0,
    count_red = 5,
    count_green = 3,
    count_yellow = 2,
	status = 1;
void display7SEG(int num){
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin,  SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin,  SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin,  SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin,  SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin,  SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin,  SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin,  SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin,  SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin,  SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin,  SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin,  SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin,  SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin,  SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin,  SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin,  SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin,  SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin,  SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin,  SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin,  SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin,  SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin,  SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	}
}
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
void ex5_run(){
	switch (status) {
	case 1:
		HAL_GPIO_WritePin(LED_RED_NS_GPIO_Port, LED_RED_NS_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_NS_GPIO_Port, LED_YELLOW_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_NS_GPIO_Port, LED_GREEN_NS_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_EW_GPIO_Port, LED_RED_EW_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_EW_GPIO_Port, LED_YELLOW_EW_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_EW_GPIO_Port, LED_GREEN_EW_Pin, RESET);
		display7SEG(count_red);
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
	    display7SEG(count_red);
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
		display7SEG(count_green);
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
		display7SEG(count_yellow);
		--count_red;
		--count_yellow;
		break;

	}
	reset_and_change_states();
}





