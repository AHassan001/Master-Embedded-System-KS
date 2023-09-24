/*
 * EX4.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Abdelrahman Maher
 */


/*
 * Insert an element in an array
 *
 */

#include "stdio.h"

void main()
{
	int i=0, new_value=0, location=0, no_of_elements = 0;
	int  arrays[20] ,temp[20];

	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&no_of_elements);

	for (i=1; i <= no_of_elements ;i++)
	{
		arrays[i] = i;
		temp[i] = arrays[i];
		printf("%d  ",arrays[i]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&new_value);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	if (location <= no_of_elements)
	{
		for(i=location; i<no_of_elements +1; i++)
		{
			temp[i + 1] = arrays[i] ;
			temp[location] = new_value;
		}

		i=1;
		while(temp[i] != 0)
		{
			printf("%d  ",temp[i]);
			i++;
		}
	}
	else
		printf("Error number out of range");

}
