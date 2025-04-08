#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    clrscr();
    n=100;
    printf("The prime No between 1-100 are:- \n");
    for(i=1; i<=100; i++)
    {
        if(primecheck(i)==1)
        {
            printf("%d\t",i);
        }
    }
    getch();
}
int primecheck(int x)
{
    int count=0,j;
    for(j=2; j<x; j++)
    {
        if(x%j==0)
            count++;
    }
    if(count==0)
        return 1;
    else
        return 0;
}
