/*
 * EX1.c
 *  Description:Function to calculate prime numbers between interval (10-30 )
 *  Created on: Nov 11, 2021
 *      Author: yasmine mostafa
 */

#include<stdio.h>

void prime(int x, int y)
{
	int i,j,flag;

	printf("enter two numbers(intervals):%d %d \n",x,y);

	for(i=x;i<=y;i++)
	{
		for(j=2;j<=(i/2);j++)
				{
					if(i%j == 0)
					{
						flag = 1;
						break;
					}
				}
				if(flag == 0)
				{
					printf("%d\t",i);
				}
				else
				{
					flag=0;
				}

			}
		}



int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	prime(a,b);
	return 0;
}
