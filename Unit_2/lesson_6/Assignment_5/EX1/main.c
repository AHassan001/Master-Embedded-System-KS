 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 
 /*
 *
 * EX1) C Program to store info(name,roll and marks) of students using structures 
 *
 */
 
 #include "stdio.h"

 struct Student
 {
	 char name[25];
	 int roll;
	 float mark;
 }g_st;

  void  print(struct Student g_st)
  {
	  printf("\nDisplaying Information\n");

	  printf("name: %s\n",g_st.name);
	  printf("Roll: %d\n",g_st.roll);
	  printf("Marks: %.2f\n",g_st.mark);

  }

 void main ()
 {
	printf("Enter information of students: \n\n");

	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",&g_st.name);

	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&g_st.roll);

	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&g_st.mark);

	print(g_st);
 }