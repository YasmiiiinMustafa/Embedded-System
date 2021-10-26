/*
 * EX16.c
 *  to makee a simple calculator to add,subtract,multiply or divide
 *  Created on: Oct 25, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
int main()
{
	int n1,n2;
	char op;
	scanf("%d %d",&n1,&n2);
	scanf("%*c%c",&op);

	switch(op)
	{
	case '+':
	{
		int sum = n1+n2;
		printf("sum=%d",sum);
	}
	break;

	case '-':
		{
			int sub = n1-n2;
			printf("sub=%d",sub);
		}
	break;

	case '*':
		{
			int mul = n1*n2;
			printf("mul=%d",mul);
		}
	break;

	case '/':
		{
			int div = n1/n2;
			printf("div=%d",div);
		}
	break;

	default:
	{
		printf("nothing");
	}
	break;

	}}
