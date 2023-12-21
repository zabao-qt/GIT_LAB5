/*
 * uart.h
 *
 *  Created on: Dec 21, 2023
 *      Author: Admin
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"
#include "timer.h"
#include "stdio.h"
#include "stdlib.h"
#include "global.h"
#include "command_parser.h"

void uart_communiation_fsm(ADC_HandleTypeDef hadc1, UART_HandleTypeDef huart2);

#endif /* INC_UART_H_ */
