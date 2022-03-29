/*
 * state.h
 *
 *  Created on: Mar 19, 2022
 *      Author: yasmine mostafa
 */

#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdlib.h"


// automatic state function generated
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_) ST_##_statFUN_

void US_set_distance(int d);
void DC_motor(int s);


#endif /* STATE_H_ */
