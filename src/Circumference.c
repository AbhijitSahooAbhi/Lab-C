//Assignment 16
#include<stdio.h>
const float PI=3.141;
float area(float radius)
{
	return PI*radius*radius;
}
float circum(float radius)
{
	return 2*PI*radius;
}
void main()
{
	float rad;
	clrscr();
	printf("Enter Radius value:");
	scanf("%f",&rad);
	printf("\nArea is: %f",area(rad));
	printf("\ncircumference is: %f",circum(rad));
	getch();
}

