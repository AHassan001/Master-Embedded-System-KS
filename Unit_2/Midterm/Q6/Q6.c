/*
 * Q6.c
 *
 *  Created on: Oct 13, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * C function to return a unique number in array with one loop
 *
 */

#include "stdio.h"

int unique_no (int arr[],int number);

void main ()
{
	int i,number,numb,arr[30];

	printf("Please enter the number of elements in the array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	printf("Please enter the elements in the array: ");
	fflush(stdin); fflush(stdout);
	for(i=0; i<number;i++)
	{
		scanf("%d",&arr[i]);
	}
	numb = unique_no (arr, number);

	printf("the unique number is %d ",numb);
}

int unique_no (int arr[],int number)
{
	int i;
	int firsthalf=0, secondhalf=0;

	for(i=0; arr[i]!=0; i++)
	{
		if (i < number/2)
		{
			firsthalf += arr[i];
		}
		else
		{
			secondhalf += arr[i];
		}

	}
	return abs(secondhalf-firsthalf);
}

