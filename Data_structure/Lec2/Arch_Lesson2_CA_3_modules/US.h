/*
 * US.h
 *
 *  Created on: Mar 19, 2022
 *      Author: yasmine mostafa
 */

#ifndef US_H_
#define US_H_

#include "state.h"

//define states

enum {
	US_busy
}US_state_id;


//declare states function US

STATE_define(US_busy);

void US_init();
//STATE pointer to function
 extern void (*US_state)();




#endif /* US_H_ */
