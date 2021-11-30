/*
 * EX1.c
 * descritpion: c program to store information(name,roll number, marks ) of student
 *  Created on: Nov 30, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

struct Sstudent
{
	char m_Name[100];
	int m_roll_number;
	float m_marks;
};

int main()
{
	struct Sstudent x;
	printf(" enter the information of student\t\n");
	fflush(stdout);

	scanf("%s",x.m_Name);
	scanf("%d",&x.m_roll_number);
    scanf("%f",&x.m_marks);


	printf(" name=%s\t\n roll=%d\t\n marks=%f",x.m_Name,x.m_roll_number,x.m_marks);

	return 0;
}
