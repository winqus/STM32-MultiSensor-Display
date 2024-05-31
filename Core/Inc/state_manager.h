/*
 * state_manager.h
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#ifndef INC_STATE_MANAGER_H_
#define INC_STATE_MANAGER_H_

#include "display_state.h"

void state_manager_init();
void state_manager_next_state();
void state_manager_set_state(DisplayState state);
void state_manager_display();
DisplayState state_manager_get_current_state();

#endif /* INC_STATE_MANAGER_H_ */
