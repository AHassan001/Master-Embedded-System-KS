/*
 * EX5.c
 *
 *  Created on: Sep 14, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Q5) Write C Program to Find ASCII Value of a Character
 *
 * */
#include "stdio.h"

void main()
{
	char x = 0;

	printf("Enter a character: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%c", &x );

	printf("ASCII value of %c = %d", x,x);
}
