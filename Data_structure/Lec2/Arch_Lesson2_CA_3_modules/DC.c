/*
 * DC.c
 *
 *  Created on: Mar 19, 2022
 *      Author: yasmine mostafa
 */

#include "DC.h"

// variable

int DC_speed=0;

//STATE pointer to function

void (*DC_state)();

void DC_init()
{
	//init pwm
	printf(" DC_init \n");
}

void DC_motor(int s)
{
	DC_speed=s;
	DC_state=STATE(DC_busy);
	printf(" CA------speed=%d----->DC \n ",DC_speed);
}
STATE_define(DC_ideal)
{
	//state name
	DC_state_id = DC_ideal;
	//call pwm to make speed = DC_speed
	printf("DC_waiting:speed = %d \n " , DC_speed);


}

STATE_define(DC_busy)
{
	//state name
	DC_state_id = DC_busy;
	DC_state=STATE(DC_busy);
	// state action //call pwm to make speed = DC_speed
	printf("DC_waiting:speed = %d \n " , DC_speed);

}
