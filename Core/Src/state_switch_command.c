/*
 * state_switch_command.c
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#include "command.h"
#include "state_manager.h"

static void switch_state_execute() {
	state_manager_next_state();
}

Command state_switch_command = {
	.execute = switch_state_execute
};
