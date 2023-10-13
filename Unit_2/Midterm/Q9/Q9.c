/*
 * Q9.c
 *
 *  Created on: Oct 13, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * C function to reverse elements of an array
 *
 */

#include "stdio.h"
#include "string.h"

void reverse_names(char arr[],int size);

void main()
{
	char arr[50];
	int size=0;

	printf("Please enter your name: ");
	fflush(stdin);	fflush(stdout);
	gets(arr);

	printf("\nThe name is: %s\n",arr);
	size = strlen(arr);
	reverse_names(arr,size-1);
}

void reverse_names(char arr[],int size)
{
	char Second_name[20],First_name[20],i=0,j=0;

	while (arr[i]!= ' ')
	{
		First_name[i]= arr[i];
		i++;
	}
	First_name[i] = '\0';

	while(arr[i]!= '\0')
	{
		Second_name[j]= arr[i];
		j++;
		i++;
	}
	Second_name[j] = ' ';

	strcat(Second_name,First_name);
	printf("The reverse names is: %s",Second_name);
}
