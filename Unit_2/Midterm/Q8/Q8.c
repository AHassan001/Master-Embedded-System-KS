/*
 * Q8.c
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

void reverse_and_print_arr(int arr[],int size);


void main()
{
	int arr[50], size,i;

	printf("Enter how many elements you want to add: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&size);

	printf("Enter the elements of the array: ");
	fflush(stdin);	fflush(stdout);

	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	reverse_and_print_arr(arr,size);
}

void reverse_and_print_arr(int arr[],int size)
{
	int i;

	for(i=size-1; i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
