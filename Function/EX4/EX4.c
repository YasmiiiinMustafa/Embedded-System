/*
 * EX4.c
 * Description: calculate the power of number using recursion
 *
 *  Created on: Nov 11, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int power (int n,int p)
{	if(p!=0)
	{
		 return (n*power(n,p-1));
	}

	else
        return 1;
}

int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	int result =power(x,y);

	printf("result=%d",result);

	return 0;
}
