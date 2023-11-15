 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 /*
 * Ex4) print the element of an array in reverse order
 */
 
#include <stdio.h>

struct employee
{
	char Name[20];
	int ID;

};

struct employee* S_ptr;

void main()
{
	struct employee emp1 = {"Alex",1002}, emp2 ={"Ahmed",1003}, emp3 ={"Abdo",1004};
	S_ptr = &emp1;
	
	
	printf("Employee Name: %s\n",S_ptr->Name); 
	printf("Employee ID: %d",S_ptr->ID); 

}