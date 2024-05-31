/*
 * display_strategy.h
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#ifndef INC_DISPLAY_STRATEGY_H_
#define INC_DISPLAY_STRATEGY_H_

typedef struct {
	void (*display)(float);
} DisplayStrategy;

#endif /* INC_DISPLAY_STRATEGY_H_ */
