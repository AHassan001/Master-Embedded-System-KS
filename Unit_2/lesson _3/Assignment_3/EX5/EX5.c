/*
 * EX5.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Abdelrahman Maher
 */


/*
 * C program to search an element in array
 *
 */

#include "stdio.h"



void main()
{
	char i, flag=0, element_to_be_searched, no_of_element =0;
	int elements[20]= {11,0};

	printf("Enter no of elements : ");
	fflush(stdin);    fflush(stdout);
	scanf("%d", &no_of_element);

	for (i=1; i <= no_of_element; i++)
	{
		elements[i] = elements[i-1] + 11;
		printf("%d  ",elements[i-1]);
	}

	printf("\nEnter the elements to be searched : ");
	fflush(stdin);    fflush(stdout);
	scanf("%d", &element_to_be_searched);

	for(i=0;i < no_of_element ; i++)
	{
		if(element_to_be_searched == elements[i] )
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("Number found at the location = %d",i+1);
	}
	else
		printf("Number cannot be founded. ");

}
