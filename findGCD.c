#include<stdio.h>
int fgcd(int x, int y)
	{
		if(x>y)
		{
			fgcd(x-y,y);
		}
		else if(y>x)
		{
			fgcd(x,y-x);
		}
		else
		return x;
	}
int main()
{
	int a,b,gcd;
	
	printf("Enter 1st no-");
	scanf("%d",&a);
	printf("Enter 2nd no-");
	scanf("%d",&b);
	
	gcd=fgcd(a,b);
	printf("GCD of %d & %d is: %d",a,b,gcd);
	return 0;
}
	
	
