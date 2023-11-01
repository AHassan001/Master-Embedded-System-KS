 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 
 /*
 *
 * EX4) Store info of students using structure
 *
 */
  #include "stdio.h"

 struct Student
 {
	 char name[25];
	 int roll;
	 float mark;
 }g_st[10];

  void  print(struct Student g_st[10])
  {
	int i=0;
	
	printf("\nDisplaying Information of students: \n");

	for(i=0;i<2;i++)
	{
	  printf("\nInformation for roll number %d:\n",g_st[i].roll);
	  printf("name: %s\n",g_st[i].name);
	  printf("Marks: %.2f\n",g_st[i].mark);
	  
	}
  }

 void main ()
 {
	int i=0;
	printf("Enter information of students: \n");

	for(i=0;i<2;i++)
	{
		printf("\nEnter roll number ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&g_st[i].roll);
		
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s",&g_st[i].name);

		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&g_st[i].mark);
		
	}
	print(g_st);
 }