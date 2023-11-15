 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 
/*
* ex1) changing a value of a variable by using pointers
*/

#include <stdio.h>

void main()
{
	int m = 29;
	int *ab = &m;
	
	printf("\nAddress of m : %p\n",&m);
	printf("value of m : %d\n\n",m);
	
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : %p\n",&ab);
	printf("Address that the pointer pointes to (address of m)pointer ab : %p\n",ab);
	printf("content of pointer ab : %d\n\n",*ab);
	
	m = 34;
	printf("The vale of m assigned to %d now.\n",m);
	printf("Address of pointer ab : %p\n",ab);
	printf("content of pointer ab : %d\n\n",*ab);

	*ab = 7;
	printf("The poimter variable ab is assigned with the value %d now.\n",*ab);
	printf("Address of m : %p\n",&m);
	printf("value of m : %d\n",m);
}