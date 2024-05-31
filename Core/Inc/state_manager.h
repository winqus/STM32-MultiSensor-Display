/*
 * state_manager.h
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#ifndef INC_STATE_MANAGER_H_
#define INC_STATE_MANAGER_H_

#include "display_state.h"

void init();
void next_state();
void set_state(DisplayState state);
DisplayState get_current_state();

#endif /* INC_STATE_MANAGER_H_ */
