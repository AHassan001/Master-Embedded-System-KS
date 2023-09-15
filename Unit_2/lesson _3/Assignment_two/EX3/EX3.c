/*
 * EX3.c
 *
 *  Created on: Sep 15, 2023
 *      Author: Abdelrahman Maher
 */


/*
 *
 * Ex3) find the largest number between 3 numbers
 *
 * */

#include "stdio.h"

void main()
{
	float x = 0.0;
	float y = 0.0;
	float z = 0.0;

	printf("please enter three number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	if(x > y)
	{
		if(x > z)
			printf("Largest number = %.2f",x);
		else
			printf("Largest number = %.2f",z);
	}
	else
	{
		if(y>z)
			printf("Largest number = %.2f",y);
		else
			printf("Largest number = %.2f",z);
	}
}
