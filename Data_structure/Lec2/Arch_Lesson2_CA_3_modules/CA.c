/*
 * CA.c
 *
 *  Created on: Mar 19, 2022
 *      Author: yasmine mostafa
 */

#include "CA.h"

// variable

int CA_speed=0;
int CA_distance=0;
int CA_threshold=50;


//STATE pointer to function

void (*CA_state)();

//set event (signal)

US_set_distance(int d)
{
	CA_distance = d;
	(CA_distance <= CA_threshold) ? (CA_distance = STATE(CA_waiting)) : (CA_distance = STATE(CA_driving));

	printf("CA-----distance=%d------> CA\n ",CA_distance);
}



STATE_define(CA_waiting)
{
	//state name
	CA_state_id = CA_waiting;
	printf("CA_waiting: distance =%d  \n " , CA_distance);


	//state action
	CA_speed = 0;
	DC_motor(CA_speed);
}

STATE_define(CA_driving)
{
	//state name
	CA_state_id = CA_driving;
	printf("CA_driving: distance =%d ,speed = %d \n " , CA_distance ,CA_speed);


	//state action
	CA_speed = 30;
	DC_motor(CA_speed);
}


