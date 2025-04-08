#include<stdio.h>
#include<conio.h>
void main ()
{
    int a[10],b[10],c[20],i,j,temp,n1,n2,size;
    //clrscr();
    printf("Enter the size of 1st array:\n");
    scanf("%d",&n1);
    printf("Enter the elements into the array:\n");
    for(i=0; i<n1; i++)
    {
        printf("value of a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter the size of 2nd array:\n");
    scanf("%d",&n2);
    size=n1+n2;
    for(i=0; i<n2; i++)
    {
        printf("value of b[%d]=",i);
        scanf("%d",&b[i]);
    }
     printf(" \nprint the two arrays\n");
    for(i=0; i<n1; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    for(i=0; i<n2; i++)
    {
        printf("%d  ",b[i]);
    }
    
    printf("\n merge the arrays:\n ");
    for(i=0; i<n1; i++)
    {
        c[i]=a[i];
        c[i+n1]=b[i];
    }
    
    for(i=0; i<size; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\nthe ordered merge array is:\n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(i=0; i<size; i++)
    {
        printf("%d ",c[i]);
    }
    //getch();
}
