/*
 * command.h
 *
 *  Created on: May 31, 2024
 *      Author: winqus
 */

#ifndef INC_COMMAND_H_
#define INC_COMMAND_H_

typedef struct {
	void (*execute)(void);
} Command;

#endif /* INC_COMMAND_H_ */
