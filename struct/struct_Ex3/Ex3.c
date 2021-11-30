/*
 * Ex3.c
 * description: c function to add complex number
 *  Created on: Nov 30, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

struct Scomplex {
	double m_real;
	double m_imaginary;
};

struct Scomplex read(char name[])
{
	struct Scomplex c;
	printf("the %s complex value",name);
	fflush(stdout);
	scanf("%lf , %lf",&c.m_real,&c.m_imaginary);

	return c;
}

struct Scomplex Add(struct Scomplex A,struct Scomplex B)
{
	struct Scomplex s;
	s.m_real=A.m_real+B.m_real;
	s.m_imaginary =A.m_imaginary +B.m_imaginary;

	return s;
}
int main()
{
	struct Scomplex x,y,z;

	x=read("x");
	y=read("y");
	z=Add(x,y);

	printf("z= %lf + j %lf",z.m_real,z.m_imaginary);

	return 0;
}
