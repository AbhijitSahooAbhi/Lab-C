#include<stdio.h>
void main()
{
	int a[100],i,n;
	printf("\nEnter the size of the array:");
 	scanf("%d",&n);
 	printf("enter value into array:");
 	for(i=0;i<n;i++)
	 {
	 printf("Value of a[%d]=",i);
	 scanf("%d",&a[i]);
	 }
printf("entered array value are:-");
for(i=0;i<n;i++)
{
	printf("%d \t",a[i]);
}
}
