/*
 * main.c
 *
 *  Created on: Mar 25, 2022
 *      Author: yasmine mostafa
 */


#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"conio.h"
#include <stddef.h>

#define Dprintf(...)  {fflush(stdout);\
					   fflush(stdin);\
					   printf(__VA_ARGS__);\
					   fflush(stdout);\
					   fflush(stdin);}


struct Sdata
{
	int ID;
	char name[40];
	float height;
};

struct Sstudent
{
	struct Sdata student;
	struct Sstudent*pnextstudent;
};


struct Sstudent *gpfirststudent = NULL;

// APIS 1-fill the record

void fill_the_record(struct Sstudent* pnewstudent)
{
	char temp_text[40];
	Dprintf("\n enter the ID");
	gets(temp_text);

	pnewstudent -> student.ID = atoi(temp_text);

	Dprintf("\n enter student full name");
	gets(pnewstudent -> student.name);

	Dprintf("\n enter the height");
	gets(temp_text);
	pnewstudent->student.height=atof(temp_text);

}



//2-add student

void AddStudent()
{	struct Sstudent *pnewstudent;

	if(gpfirststudent == NULL)
	{
		pnewstudent = (struct Sstudent*) malloc (sizeof (struct Sstudent));
		gpfirststudent = pnewstudent ;

	}

	else
	{
		struct Sstudent* plaststudent ;

		plaststudent =gpfirststudent;

		while(plaststudent -> pnextstudent)
		{
			plaststudent = plaststudent -> pnextstudent;
		}
		pnewstudent= (struct Sstudent*)malloc(sizeof(struct Sstudent));
		plaststudent->pnextstudent = pnewstudent;

	}

		fill_the_record(pnewstudent);

		pnewstudent->pnextstudent=NULL;


}

// 3-delete record in the list

int Delete_record()
{
	char temp_text[40];
	unsigned int selected_ID;
	Dprintf("\n enter the ID of selected student");
	gets(temp_text);
	selected_ID=atoi(temp_text);


	if(gpfirststudent)
	{
		struct Sstudent*pSelectedStudent=gpfirststudent;
		struct Sstudent*pPrevoiusStudent=NULL;

		while(pSelectedStudent)
		{
			if(pSelectedStudent->student.ID == selected_ID)
			{
				if(pPrevoiusStudent)
				{
					pPrevoiusStudent->pnextstudent = pSelectedStudent->pnextstudent;
				}
				else
				{
					gpfirststudent=pSelectedStudent->pnextstudent;
				}
				free(pSelectedStudent);
				return 1; // to find it
			}
			pPrevoiusStudent=pSelectedStudent;
			pSelectedStudent=pSelectedStudent->pnextstudent;

		}

	}
Dprintf("\n canot find selected_ID");
return 0;

}

//4-view (print) student

void view_record()
{
	struct Sstudent* pCurrentStudent= gpfirststudent;
	int count = 0;

	if(gpfirststudent == NULL)
	{
		Dprintf("]n list is empty");
	}
	else
	{
		while(pCurrentStudent)
		{
			Dprintf("record number = %d",count+1);
			Dprintf("\n\t ID:%d" , pCurrentStudent->student.ID);
			Dprintf("\n\t NAME:%s ", pCurrentStudent->student.name);
			Dprintf("\n\t height:%f" , pCurrentStudent->student.height);

			pCurrentStudent=pCurrentStudent->pnextstudent;
			count++;

		}
	}
}


//5-Delete all record

void Delete_all_records()
{
	struct Sstudent* pCurrentStudent=gpfirststudent;

	if(gpfirststudent == NULL)
	{
		Dprintf("\n the list is empty");
	}
	else
	{
		while(pCurrentStudent)
		{
			struct Sstudent*pTempStudent = pCurrentStudent;
			pCurrentStudent=pCurrentStudent->pnextstudent;
			free(pTempStudent);
		}

		gpfirststudent = NULL;
	}
	}

void main()
{
	char temp_text[40];

	while(1)
	{
		Dprintf("\n choose the following options");
		Dprintf("1:Add Student");
		Dprintf("2:Delete Student");
		Dprintf("3:view Student");
		Dprintf("4:Delete All Student");
		Dprintf("enter option number");

		gets(temp_text);

		Dprintf("\n----------------------");

		switch( atoi(temp_text))
		{
		case 1 :
			AddStudent();
			break;
		case 2:
			Delete_record();
			break;
		case 3 :
			view_record();
			break;
		case 4:
			Delete_all_records();
			break;
		default:
			Dprintf("\n wrong option");
			break;
		}

	}
}

