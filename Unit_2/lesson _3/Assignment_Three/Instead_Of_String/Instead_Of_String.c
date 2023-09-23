/*
 * Instead_Of_String.c
 *
 *  Created on: Sep 21, 2023
 *      Author: Abdelrahman Maher
 */
#include "stdio.h"


/*
 *
 * copy string to string
 *
 * */

/*
void main()
{
	char First_name[20] = "abdelrahman";
	char Name[20];
	char i=0;

	//for(i=0; i<=sizeof(First_name) ;i++)
	//{
	//	Name[i] = First_name[i];
	//}

	while(First_name[i] != 0)
	{
		Name[i] = First_name[i];
		i++;
	}
	Name[i] = '\0'; //same as 0 (NULL)
	printf("%s",Name);
}
 */

/**********************************************************************/
/*
 *
 * Add string to string
 *
 * */

/*
void main()
{
	char First_name[20] = "Abdelrahman";
	char Second_name[20] = "Maher";
	char Full_name[20];
	char i =0, j=0;

	while(First_name[i] !=0 )
	{
		Full_name[i] = First_name[i];
		i++;
	}
	Full_name[i] = ' ';
	i++;

	while(Second_name[j] !=0 )
	{
		Full_name[i] = Second_name[j];
		i++;
		j++;
	}
	Full_name[i] = '\0';

	printf("%s",Full_name);

}
 */

/**********************************************************************/
/*
 *
 * change string Case from upper to lower
 * and lower to upper
 *
 * */

/*
void main ()
{
	char First_name[20] = "AbdElRahman";
	char Second_name[20] = "MaHer";
	//char name_lower_case[20];
	//char name_upper_case[20];

	char i =0;

	while(First_name[i] !=0 )
	{
		 if (First_name[i] >= 'A' && First_name[i] <= 'Z' )
		{
			First_name[i] = First_name[i] + 32;
		}
		i++;
	}
	printf("%s\n",First_name);

	i=0;
	while(Second_name[i] !=0 )
		{
			 if (Second_name[i] >= 'a' && Second_name[i] <= 'z' )
			{
				Second_name[i] = Second_name[i] - 32;
			}
			i++;
		}
	printf("%s",Second_name);

}
 */

/**********************************************************************/
/*
 *
 * Find the length of the string
 *
 * */

/*
void main()
{
	char First_name[] = "AbdElRahman";
	char counter=0;

	while(First_name[counter] != 0)
	{
		counter++;
	}

	printf("%d", counter);
}
 */

/**********************************************************************/
/*
 *
 * Compare 2 strings
 *
 * */

/*
void main()
{
	char Names[5][20] = {"Abdelrahman",
				         "Mahmoud",
					     "Abdelrahman",
					     "Maher",
					     "AbdElRahman"};
	char name[20] ;
	//char name[20] = "Maher";
	char i=0, j=0, flag=0;

	printf("Please enter your name to be checked: \n");
	fflush(stdin);  fflush(stdout);
	scanf("%s", name);

	for (i=0; i<5; i++)
	{
		j=0;
		flag=0;

		while( name[j] != 0 && Names[i][j] != 0)
		{
			if(name[j] != Names[i][j])
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
		{
			printf("Your name is in the list");
			break;
		}
	}
	if (flag == 1)
	{
		printf("Sorry, Your name is not in the list");
	}
}

*/
