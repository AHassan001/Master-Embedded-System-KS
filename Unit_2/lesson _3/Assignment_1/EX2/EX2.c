/*
 * EX2.c
 *
 *  Created on: Sep 14, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Q2) User enteres an integer and we print it
 *
 * */

#include "stdio.h"

void main ()
{
	unsigned int x = 0;

	printf("Enter an integer ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d", &x);

	printf("You entered: %d ", x);

}
