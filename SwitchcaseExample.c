#include<stdio.h>
#include<conio.h>
void arr();
void even();
void odd();
void avg();
void max();
void reverse();
void main()
{
	//clrscr();
	printf("MENU\n");
	printf("Follow the Option No.\n");
	printf("1. Print the even valued element.\n");
	printf("2. Print the odd valued element.\n");
	printf("3. Calculate and print the sum and average of the elements of array.\n");
	printf("4. Print the maximum and minimum element of array.\n");
	printf("5. Remove the duplicates from the array.\n");
	printf("6. Print the array in reverse.\n");
	
	int choice;
	printf("Enter your Choice option between 1-7:-");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			 even();
			break;
		/*case 2:
			 odd();
			break;
		case 3:
			 avg();
			break;
		case 4:
			 max();
			break;
		case 5:
			 dup();
			break;
		case 6:
			 reverse();
			break;*/
		case 7:
			exit(0);
			break;
		default:
			printf("\n invalid option");
	}
	char ch,y,Y;
	printf("If you want go to menu.\n press (Y or y) to continue...");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch==y || ch==Y)
	{
		main();
	}
}

