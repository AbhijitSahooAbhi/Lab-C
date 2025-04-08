#include<stdio.h>
#include<conio.h>
void main ()
{
    int a[10],b[10],c[20],i,j,temp,n;
    clrscr();
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the 1st elements into the array:\n");
    for(i=0; i<n; i++)
    {
	printf("value of a[%d]=",i);
	scanf("%d",&a[i]);
    }

    printf("Enter the 2nd elements into the array: \n");
    for(i=0; i<n; i++)
    {
	printf("value of b[%d]=",i);
	scanf("%d",&b[i]);
    }
     printf(" \nprint the two arrays\n");
    for(i=0; i<n; i++)
    {
	printf("%d  ",a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
	printf("%d  ",b[i]);
    }

    printf("\nmerge the arrays:\n ");
    for(i=0; i<n; i++)
    {
	c[i]=a[i];
	c[i+n]=b[i];
    }

    for(i=0; i<2*n; i++)
    {
	printf("%d ",c[i]);
    }
    printf("\nthe ordered merge array is:\n");
    for(i=0; i<2*n; i++)
    {
	for(j=0; j<2*n-i-1; j++)
	{
	    if(c[j]>c[j+1])
	    {
		temp=c[j];
		c[j]=c[j+1];
		c[j+1]=temp;
	    }
	}
    }
    for(i=0; i<2*n; i++)
    {
	printf("%d ",c[i]);
    }
    getch();
}
