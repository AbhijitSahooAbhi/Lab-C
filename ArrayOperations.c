#include<stdio.h>
void even();
void odd();
void sum_avg();
void max_min();
void re_du();
void reverse();
int main()
{
int option;
char ch;
clrscr();
printf("\nMENU of performing array task.............\n");
printf("\n1.Print The even-valued element");
printf("\n2.Print The odd-valued element");
printf("\n3.Print the sum and avarage of the elements of array");
printf("\n4.Print the Maximum and minimum element in array");
printf("\n5.Remove the duplicates from the array ");
printf("\n6.Print the array in reverse order");
printf("\n7.Exit");
printf("\nEnter a option as your choice:");
scanf("%d",&option);
switch(option)
{
 case 1:
 even();
 break;
 case 2:
 odd();
 break;
 case 3:
 sum_avg();
 break;
 case 4:
 max_min();
 break;
 case 5:
 re_du();
 break;
 case 6:
 reverse();
 break;
 case 7:
 printf("\nEXITING Program....press(1)");
 
 default:
 printf("\nINVALID OPTION YOU ENTER error!");
}
 printf("\nDo you want to continue ? (if yes then press(y),else press any key) =");
 fflush(stdin);
 scanf("%c",&ch);
 if(ch=='y'||ch=='Y')
 {
 main();
 }
 getch();
}
 
void even()
{
 int a[100],j,i,n;
 printf("\nEnter the size of the array:");
 scanf("%d",&n);
printf("\nEnter value into array:\n");
 for(i=0;i<n;i++)
 {
 printf("Value of a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("\nEven valued elements in array are=\n");
 for(i=0;i<n;i++)
 {
 if(a[i]%2==0)
 //a[j-i-1]=a[i]^a[j-i-1];
 printf("\n%d",a[i]);
 }
 }

void odd()
{
 int a[100],i,n;
 printf("\nEnter the size of the array:");
 scanf("%d",&n);
 printf("\nEnter value into array:\n");
 for(i=0;i<n;i++)
 {
 printf("Value of a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("\nOdd valued elements in array are=\n");
 for(i=0;i<n;i++)
 {
 if(a[i]%2!=0)
 {
 printf("\n%d",a[i]);
 }
 }
}
void sum_avg()
{
 int a[100],i,n,sum=0,avg;
 printf("\nEnter the size of the array:");
 scanf("%d",&n);
 printf("\nEnter value into array:\n");
 for(i=0;i<n;i++)
 {
 printf("Value of a[%d]=",i);
 scanf("%d",&a[i]);
 sum=sum+a[i];
 }
 avg=sum/n;
 printf("\nSUM of elements in array =%d",sum);
 printf("\nAverage of elements in array=%d",avg);
 
}
void max_min()
{
 int a[100],i,n,min,max;
 printf("\nEnter the size of the array:");
 scanf("%d",&n);
 printf("\nEnter value into array:\n");
 for(i=0;i<n;i++)
 {
 printf("Value of a[%d]=",i);
scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=0;i<n;i++)
 {
 if(a[i]>max)
 {
 max=a[i];
 }
 else
 {
 min=a[i];
 }
 }
 printf("\nMaximum element in array is=%d",max);
 printf("\nMinimum element in array is=%d",min);
}
void re_du()
{
 int a[100],n,i,j,k;
 printf("\nEnter the size of the array:");
 scanf("%d",&n);
 printf("\nEnter value into array:\n");
 for(i=0;i<n;i++)
 {
 printf("Value of a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("\nOriginal array element is =\n");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;)
 {
 if(a[i]==a[j])
 {
 for(k=j;k<n;k++) 
 {
 a[k]=a[k+1];
 }
 n--;
 }
 else
 {
 j++;
 }
 }
 }
 printf("\nAfter deleting the duplicate value the new array is=\n");
 for(i=0;i<n;i++)
 {
 printf("\n%d\t",a[i]);
 }
}
void reverse()
{
 int a[100],i,n,j;
printf("\nEnter the size of the array:");
 scanf("%d",&n);
 printf("\nEnter value into array:\n");
 for(i=0;i<n;i++)
 {
 printf("Value of a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("\nOriginal array element is =\n");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
 /*for(i=0,j=n;i<n/2;i++,j--)
 {
 a[i]=a[i]^a[j-i-1];
 a[j-i-1]=a[i]^a[j-i-1];
 a[i]=a[i]^a[j-i-1];
 }*/
for(i=0;i<n/2;i++)
{
j=a[i];
a[i]=a[n-i-1];
a[n-i-1]=j;
}
 printf("\nAfter reversing the elemnts in array=\n");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
}
