/*
 * DC.h
 *
 *  Created on: Mar 19, 2022
 *      Author: yasmine mostafa
 */

#ifndef DC_H_
#define DC_H_

#include "state.h"
#include<stdio.h>
#include<stdlib.h>
//define states

enum {
	DC_ideal,
	DC_busy
}DC_state_id;


//declare states function DC

STATE_define(DC_ideal);
STATE_define(DC_busy);

void DC_init();

//STATE pointer to function
 extern void (*DC_state)();




#endif /* DC_H_ */
