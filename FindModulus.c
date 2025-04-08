#include<stdio.h>
int sum(int n)
	
		{
		if(n%2==0)
	   	return (-(n/2));
	   	else
	   	return ((n+1)/2);
	   }
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
printf("%d",a);
	printf("sum is %d",sum(a));
}
	
