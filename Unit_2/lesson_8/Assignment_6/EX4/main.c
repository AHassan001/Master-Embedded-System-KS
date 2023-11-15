 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 /*
 * Ex4) print the element of an array in reverse order
 */
 
#include <stdio.h>


void main()
{
	int text[15];
	int *ptr = text;
	int i=0,size=0;
	
	printf("Input the number of elements to store in the array (max 15):");
	scanf("%d",&size);
	
	printf("Input %d number of elements in the array:\n",size);
	
	for (i=0;i<size;i++)
	{
		printf("element-%d:",i+1); 
		scanf("%d",ptr+i);
	}
	
	printf("\nThe elements of array in reverse order are:\n");
	
	for (i=size-1;i>=0;i--,ptr--)
	{
		printf("element- %d: %d\n",i+1,*(ptr)); 
	}
}