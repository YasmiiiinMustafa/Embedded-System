/*
 * CA.h
 *
 *  Created on: Mar 19, 2022
 *      Author: yasmine mostafa
 */

#ifndef CA_H_
#define CA_H_

#include "state.h"

//define states

enum {
	CA_waiting,
	CA_driving
}CA_state_id;


//declare states function CA

STATE_define(CA_waiting);
STATE_define(CA_driving);

//STATE pointer to function
 extern void (*CA_state)();




#endif /* CA_H_ */
