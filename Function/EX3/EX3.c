/*
 * EX3.c
 *Description: reverse the sentence using recursion
 *  Created on: Nov 11, 2021
 *      Author: yasmine mostafa
 */


#include <stdio.h>

void reverse()
{
    char c;

    scanf("%c", &c);
    if (c != '\n')
    {
        reverse();
        printf("%c", c);
    }
}
int main()
{
    printf("Enter a Sentence: \n");
    reverse();
    return 0;
}
