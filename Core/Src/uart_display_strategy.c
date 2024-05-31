/*
 * uart_display_strategy.c
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#include "uart_display_strategy.h"
#include <stdio.h>
#include <string.h>

static UART_HandleTypeDef *uartHandle = NULL;

void uartDisplayStrategy_init(UART_HandleTypeDef *huart) {
	if (uartHandle == NULL && huart != NULL) {
		uartHandle = huart;
	}
}

void UART_print(const char *message) {
	if (uartHandle == NULL) {
		return;
	}

	HAL_UART_Transmit(uartHandle, (uint8_t *)message, strlen(message), 100);
}

void uartDisplayStrategy_display(float value) {
	if (uartHandle == NULL) {
		return;
	}

	int scaledValue = (int)(value * 100);
	char msg[50];

	sprintf(msg, "%d.%02d\r\n", scaledValue / 100, scaledValue % 100);

	UART_print(msg);
}

DisplayStrategy uartDisplayStrategy = {
	.display = uartDisplayStrategy_display
};
