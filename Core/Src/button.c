/*
 * user_button.c
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#include "button.h"
#include "stm32l4xx_hal.h"

#define USER_BUTTON_PIN GPIO_PIN_13
#define USER_BUTTON_GPIO_PORT GPIOC
#define USER_BUTTON_EXTI_IRQn EXTI15_10_IRQn

static Command *button_command = NULL;

void button_setCommand(Command *command) {
	if (command != NULL) {
		button_command = command;
	}
}

void button_handler() {
	if (button_command != NULL) {
		button_command->execute();
	}
}
