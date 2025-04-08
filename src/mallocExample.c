#include<stdio.h>
#include<process.h>
void main()
{
	int x,sum=0,avg,i,*ptr;
	clrscr();
	printf("Enter the total number you want to enter: ");
	scanf("%d",&x);
	ptr=(int*) malloc(x*sizeof(int));
	for(i=0;i<x;i++)
	{
		printf("Enter element no.%d: ",i+1);
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	avg=sum/x;
	printf("The sum is= %d",sum);
	printf("\nThe average is= %d",avg);
	getch();
}
