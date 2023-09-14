/*
 * EX4.c
 *
 *  Created on: Sep 14, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Q4) Write C Program to Multiply two Floating Point Numbers
 *
 * */
#include "stdio.h"

void main()
{
	float x = 0.0;
	float y = 0.0;

	printf("Enter two numbers: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f \n %f", &x ,&y);

	printf("Sum: %f", x*y);
}
