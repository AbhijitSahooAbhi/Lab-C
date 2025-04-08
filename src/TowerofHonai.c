//tower of Honei
#include<stdio.h>
void tower(int n,char from,char to,char aux)
{
	
	if(n==1)
	{
		printf("\n Disk %d move from rod(%c) to rod(%c)",n,from,to);
	}
	else
	{
		tower(n-1,from,aux,to);
		printf("\n Disk %d move from rod(%c) to rod(%c)",n,from,to);
		tower(n-1,aux,to,from);
	}
}
void main()
{
	int n,i;
	char f='A',t='C',a='B';
	printf("Enter the Disk number:");
	scanf("%d",&n);
	tower(n,f,t,a);
}

