/*
 * EX3.c
 *
 *  Created on: Oct 6, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * C Program to reverse the sentence
 *
 */
#include "stdio.h"

void Reverse_sentence();

void main()
{
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);

	Reverse_sentence();
}

void Reverse_sentence()
{
	char c;

	scanf("%c",&c);
	if(c != '\n')
	{
		Reverse_sentence();
		printf("%c",c);
	}
}




