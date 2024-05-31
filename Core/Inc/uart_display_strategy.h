/*
 * uart_display_strategy.h
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#ifndef INC_UART_DISPLAY_STRATEGY_H_
#define INC_UART_DISPLAY_STRATEGY_H_

#include "display_strategy.h"
#include "stm32l4xx_hal.h"

void uartDisplayStrategy_init(UART_HandleTypeDef *huart);

extern DisplayStrategy uartDisplayStrategy;

#endif /* INC_UART_DISPLAY_STRATEGY_H_ */
