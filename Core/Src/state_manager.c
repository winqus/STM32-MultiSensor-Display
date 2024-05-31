/*
 * state_manager.c
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#include "state_manager.h"
#include "display_state.h"

static DisplayState currentState;

void init() {
	// TODO: load from state storage
	currentState = STATE_NONE;
}

void next_state() {
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

void set_state(DisplayState state) {
	// TODO: save to state storage (eeprom)
	currentState = state;
}

DisplayState get_current_state(void) {
	return currentState;
}
