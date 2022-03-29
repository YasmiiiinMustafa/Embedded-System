/*
 * main.c
 *
 *  Created on: Mar 19, 2022
 *      Author: yasmine mostafa
 */


#include "CA.h"
#include "US.h"
#include"DC.h"

void setup()
{
	//init all driver
	//init interrupt
	//init HAL
	//init block
	US_init();
	DC_init();
	//set state pointer for each block

	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_ideal);

}
int main()
{
	setup();

	volatile int d;
	while(1)
	{
		//call state for each block
		CA_state();
		US_state();
		DC_state();

		for(d=0;d<=1000;d++);

	}
	return 0;
}
