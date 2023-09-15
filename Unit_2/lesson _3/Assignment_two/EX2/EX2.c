/*
 * EX2.c
 *
 *  Created on: Sep 15, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Ex2) c program to check Vowel or Consonant
 *
 * */

#include "stdio.h"

void main()
{
	char ch=0;

	printf("Please enter an alphabets ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&ch);

	if( ch == 'a' ||ch ==  'A' ||ch == 'e' || ch == 'E' ||ch == 'i' || ch == 'I' ||ch == 'O' ||ch ==  'o' ||ch ==  'U'|| ch == 'u')
		printf ("%c is a Vowel.",ch);
	else
		printf ("%c is a Consonant.",ch);
}
