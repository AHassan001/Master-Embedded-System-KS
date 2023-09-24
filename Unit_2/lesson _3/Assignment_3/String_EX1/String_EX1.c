/*
 * String_EX1.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Abdelrahman Maher
 */


#include "stdio.h"

void main()
{
	char i, counter=0, character, sentence[50];

	printf("Enter a string: ");
	fflush(stdin);   fflush(stdout);
	gets(sentence);

	printf("Enter a character to find frequency: ");
	fflush(stdin);   fflush(stdout);
	scanf("%c",&character);

	//	for(i=0; sentence[i] != 0; i++)

	for(i=0; i <= strlen(sentence); i++)
	{
		if(character == sentence[i])
		{
			counter++;
		}
	}

	printf("Frequency of %c = %d",character,counter);
}
