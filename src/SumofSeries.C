#include<stdio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("-%d",i);
		sum-=i;
		}
		else
		{
		printf("+%d",i);
		sum+=i;
		}
	}
	printf("\n sum of series is=%d",sum);
	getch();
}
