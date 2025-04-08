#include<stdio.h>
#include<conio.h>

void main()
{
	int c1, c2, g1, a1, n;
	char ch;
	printf("\n==================SGPA Calculator==================\n");
	
	printf("Enter your C1 mark:");
	scanf("%d", &c1);
		if(c1>=90)
				printf("Grade Point is:10");
		else if(c1>=80)
		printf("Grade Point is:9");
		else if(c1>=70)
		printf("Grade Point is:8");
		else if(c1>=60)
		printf("Grade Point is:7");
		else if(c1>=50)
		printf("Grade Point is:6");
		else if(c1>=45)
		printf("Grade Point is:5");
		else if(c1>=40)
		printf("Grade Point is:4");
		else
		printf("Grade Point is:0");
	
	
	
}
