/*
 * state_manager.c
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#include "state_manager.h"
#include "display_state.h"
#include "display_strategy.h"

static DisplayState currentState;
static DisplayStrategy *displayStrategy;

void state_manager_init(DisplayStrategy *strategy) {
	// TODO: load from state storage

	if (displayStrategy) {
		return;
	}

	if (!strategy) {
		currentState = STATE_ERROR;

		return;
	}

	currentState = STATE_NONE;
	displayStrategy = strategy;
}

void state_manager_next_state() {
	switch (currentState) {
		case STATE_NONE:
			currentState = STATE_TEMPERATURE;
			break;
		case STATE_TEMPERATURE:
			currentState = STATE_POTENTIOMETER;
			break;
		case STATE_POTENTIOMETER:
			currentState = STATE_TEMPERATURE;
			break;
		default:
			break;
	}
}

void state_manager_display() {
	if (!displayStrategy) {
		return;
	}

	switch (currentState) {
		case STATE_NONE:
			displayStrategy->display(0.00);
			break;
		case STATE_TEMPERATURE:
			displayStrategy->display(1.00);
			break;
		case STATE_POTENTIOMETER:
			displayStrategy->display(2.00);
			break;
		default:
			displayStrategy->display(-9.99);
			break;
	}
}

void state_manager_set_state(DisplayState state) {
	// TODO: save to state storage (eeprom)
	currentState = state;
}

DisplayState state_manager_get_current_state(void) {
	return currentState;
}
