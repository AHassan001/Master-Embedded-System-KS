/*
 * Quiz_Solutions.c
 *
 *  Created on: Oct 11, 2023
 *      Author: Abdelrahman Maher
 */


/*
 *
 * C Program to make sure the username and the input is the same
 *
 * */


/*
#include <stdio.h>
#include "string.h"

void main()
{
	char str1[100];
	char str2[100]= "Abdelrahman Maher";

	printf("Please enter your username: ");
	fflush(stdin); fflush(stdout);
	gets(str1);

	if( stricmp(str1,str2) == 0)
		printf("the user name is the same");
	else
		printf("Sorry not the same user name");
}

*/

/*
 *
 * Check if a given no is a power of 3
 *
 * */

/*
#include "stdio.h"

int checkpower (int numb);

void main()
{
	int number,result;

	printf("Please enter the no to be checked: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	result = checkpower (number);

	printf("%d==>%d",number,result);

}

int checkpower (int numb)
{
	if (numb % 3 == 0)
			return 0;
		else
			return 1;
}
*/

/*
 *
 * swap 2 arrays with diffrent lengths
 *
 */

/*
#include "stdio.h"

void main()
{
	int arr1[20] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[20] = {5,6,7,8,9,10};
	int i=0;

	for (i=0;i<19;i++)
	{
		arr1[i] ^= arr2[i];
		arr2[i] ^= arr1[i];
		arr1[i] ^= arr2[i];
	}

	printf("arr1: ");
	i=0;
	while (arr1[i] != 0)
	{
		printf("%d ",arr1[i]);
		i++;
	}

	printf("\narr2: ");
	i=0;
	while (arr2[i] != 0)
	{
		printf("%d ",arr2[i]);
		i++;
	}
}
*/

/*
 *
 * clear a specified bit in a number 0 or 1
 *
 */

/*
#include "stdio.h"

int check_bit (int number, int bitposition );


void main()
{
	int number,bitposition, new_number;
	int i;

	printf("Input Number = ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	printf("Bit position(0 to 31) = ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&bitposition);

	for(i=31;i>=0;i--)
	{
		new_number = (number>>i)&1 ;
		printf("%d",new_number);
	}

	new_number = check_bit(number, bitposition);
	printf("\n%d",new_number);
}
int check_bit (int number, int bitposition )
{
	int checker;
	checker = (number >> bitposition) & 1;

	if (checker == 0)
		return 0;
	else
		return 1;
}
*/


/*
 *
 *  c function to reverse to input array
 *
 */


/*
#include "stdio.h"

void print_array(int arr[],int size);
void print_reverse_arr(int arr[],int size);


void main()
{
	int size,i;
	int arr[20];

	printf("Enter the size of the array: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&size);

	printf("Enter the elements of the array: ");
	fflush(stdin);		fflush(stdout);

	for(i=0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nInput: ");
	print_array(arr,size);

	printf("\nOutput: ");
	print_reverse_arr(arr,size);
}

void print_array(int arr[],int size)
{
	int i;
	for(i=0; i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

void print_reverse_arr(int arr[],int size)
{
	int i;
	for(i=size-1; i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
*/



/*
 *
 * function to know the last occurrence of a number in a giver array
 *
 */

/*
#include "stdio.h"
void print_array(int arr[],int size);
int search_for_no(int arr[],int size,int number);

void main()
{
	int size,i,number,index;
	int arr[20];

	printf("Enter the size of the array: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&size);

	printf("Enter the elements of the array: ");
	fflush(stdin);		fflush(stdout);

	for(i=0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nInput: ");
	print_array(arr,size);

	printf("\nEnter the number to be searched in the array: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&number);

	index = search_for_no(arr, size, number);
	printf("the number %d is at %d",number,index);
}

void print_array(int arr[],int size)
{
	int i;
	for(i=0; i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

int search_for_no(int arr[],int size,int number)
{
	int i;

	for(i=size-1;i>=0;i--)
	{
		if( arr[i] == number )
			return i;
	}
	return -1;
}
*/

/*
 *
 * clear a specified bit in a given number
 *
 */

/*
#include "stdio.h"

void main()
{
	int number, Bit_position, new_number;

	printf("Input Number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&number);

	printf("Input bit to be cleared: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&Bit_position);

	new_number = number & ~(1<<Bit_position);
	printf("result = %d",new_number);

}
*/

/*
 *
 * convert a decimal stored as an ASCII to an unsigned integer
 *
 */

/*
#include "stdio.h"
#include "string.h"


void main()
{
	char str[100] = { '1','2','3','4','5'};
	int arr[100];
	int i,size;

	printf("Input size of the array: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&size);

	printf("Input the elements of the array: ");
	fflush(stdin);		fflush(stdout);
	for(i=0;i<size;i++)
	{
		scanf("%s",&str[i]);
	}

	for(i=0; i<size ;i++)
	{
		arr[i] = str[i] - '0';
		printf("%u ",arr[i]);
	}
}
*/
