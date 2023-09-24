/*
 * String_EX2.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Abdelrahman Maher
 */
/*
 *
 * calculate the length of a string
 *
 * */
#include "stdio.h"

void main ()
{
	char i=0, input_string[50];

	printf("Enter a string: ");
	fflush(stdin);  fflush(stdout);
	scanf("%s",input_string);

	while(input_string[i] != 0)
	{
		i++;
	}

	printf("Length of string: %d", i);
}

