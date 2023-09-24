/*
 * EX7.c
 *
 *  Created on: Sep 14, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Q7) Write Code to Swap Two Numbers without temp variable.
 *
 * */
#include "stdio.h"

void main()
{
	float a = 0.0;
	float b = 0.0;

	printf("Enter a value of a: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f", &a );


	printf("Enter a value of b: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f", &b );

	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping, value of a = %.2f ",a);
	printf(" \nAfter swapping, value of b = %.1f ",b);
