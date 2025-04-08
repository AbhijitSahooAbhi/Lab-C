//program to compute the factors of a given number
#include<stdio.h>
void main()
{
int n,i;
printf("Enter the number:");
scanf("%d",&n);
printf("factors of %d are:\n",n);
for(i=1;i<=n;i++)
{
if(n%i==0)
printf("%d\n",i);
}
}
