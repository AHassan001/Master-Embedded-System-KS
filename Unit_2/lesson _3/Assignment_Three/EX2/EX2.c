/*
 * EX2.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Abdelrahman Maher
 */

/*
 * Calculate the average by using arrays
 *
 */


#include "stdio.h"

void main()
{
	float number[20];
	char i=0, number_of_data = 0;
	float average = 0.0;

	printf("Enter the number of data: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&number_of_data);

	for(i=0; i<number_of_data; i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%f",&number[i]);
		average += number[i];
	}

	average /= number_of_data ;

	printf("Average = %.2f",average);

}

