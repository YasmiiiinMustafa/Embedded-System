/*
 * Ex4.c
 * descritpion: c program to store information of students using structure
 *  Created on: Nov 30, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

struct Sstudent
{
	char m_name[50];
	int m_roll_number;
	float m_marks;
};

struct Sstudent student;

int main()
{
	struct Sstudent student[3];

	int i;

	for(i=0;i<3;++i)
	{
		printf("enter the informations of students");
		fflush(stdout);
		scanf("%s",student[i].m_name);
		scanf("%d",student[i].m_roll_number);
		scanf("%f",student[i].m_marks);

		printf("\n");
	}


 printf(" display the informations");
 fflush(stdout);

	for(i=0;i<3;++i)
		{
			puts(student[i].m_name);
			printf("roll=%d\t\n",student [i].m_roll_number);
			printf("marks=%1f\t\n",student[i].m_marks);

		}

	return 0;

}
