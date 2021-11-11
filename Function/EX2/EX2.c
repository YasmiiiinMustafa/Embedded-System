/*
 * EX2.c
 *Description: factorial using recursion
 *  Created on: Nov 11, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=n*fact(n-1);
	}

	return f;
}

int main()
{
	int x,y;
	scanf("%d",&x);
	y=fact(x);
	printf("the fact of (%d)=%d",x,y);

	return 0;
}
