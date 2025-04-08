//ASSIGNMENT 15
#include<stdio.h>
#include<conio.h>
void swap(int *p1,int *p2);
void main()
{
	int x,y;
	clrscr();
	printf("Enter 1st Number: ");
	scanf("%d",&x);
	printf("Enter 2nd Number: ");
	scanf("%d",&y);
	printf("\n Before swap Number is\n x=%d \n y=%d",x,y);
	swap(&x,&y);

	getch();
}
void swap(int *p1,int *p2)
{
	int c;
	c=*p1;
	*p1=*p2;
	*p2=c;
	printf("\n After swap Number is\n x=%d \n y=%d",*p1,*p2);
}

