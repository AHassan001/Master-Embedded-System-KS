/*
 * EX6.c
 *
 *  Created on: Sep 15, 2023
 *      Author: Abdelrahman Maher
 */


/*
 *
 * Ex6) Calculate sum of natural numbers till a certain value
 *
 * */
#include "stdio.h"

void main()
{
	int i, x = 0;
	int sum = 0;

	printf("Enter an integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&x);

	for(i=0 ; i<=x ; i++)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
}
