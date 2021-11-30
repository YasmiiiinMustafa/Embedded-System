/*
 * EX2.c
 * description: c program to add two distance (in inch-feet)
 *  Created on: Nov 30, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

struct Sdistance{
	int m_feet;
	float m_inch;
};

struct Sdistance Add(struct Sdistance A, struct Sdistance B)
{
	struct Sdistance c;
	c.m_feet=A.m_feet + B.m_feet;
	c.m_inch=A.m_inch + B.m_inch;

	return c;
}
struct Sdistance x,y,sum;

int main()
{
	struct Sdistance x,y,sum;
 printf("enter the info of 1st dis");
 fflush(stdout);
	 scanf("%d",&x.m_feet);
	 scanf("%f",&x.m_inch);

 printf("enter the info of 2nd dis");
 fflush(stdout);
    scanf("%d",&y.m_feet);
    scanf("%f",&y.m_inch);

	 sum=Add(x,y);

	 if(sum.m_inch>12.0)
	 {
		 sum.m_inch=sum.m_inch-12.0;
		 ++sum.m_feet;
	 }

	 printf("the summation = %d  %f",sum.m_feet,sum.m_inch);

	 return 0;
}
