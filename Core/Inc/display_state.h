/*
 * display_state.h
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#ifndef INC_DISPLAY_STATE_H_
#define INC_DISPLAY_STATE_H_

typedef enum {
	STATE_NONE,
	STATE_LOADING,
	STATE_TEMPERATURE,
	STATE_POTENTIOMETER,
	STATE_ERROR
} DisplayState;

#endif /* INC_DISPLAY_STATE_H_ */
