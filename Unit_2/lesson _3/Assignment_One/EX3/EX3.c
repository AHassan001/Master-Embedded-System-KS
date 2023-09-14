/*
 * EX3.c
 *
 *  Created on: Sep 14, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Q3) C program to add two integeres
 *
 * */
#include "stdio.h"

void main ()
{
	unsigned int x = 0;
	unsigned int y =0;

	printf("Enter two integer: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d \n %d", &x ,&y);

	printf("Sum: %d", x+y);

}
