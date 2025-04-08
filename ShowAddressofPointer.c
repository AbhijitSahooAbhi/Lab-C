#include<stdio.h>
#include<string.h>
void main()
{
 int option,i,j,v=0,c;
 char str[50],*ptr,str2[50],str3[50];
 //clrscr();
 printf("Enter a string:");
 gets(str);
 ptr=&str;
 for(i=0;str[i]!='\0';i++)
 {
 printf("\n%c is stored in adress- %u",ptr[i],&ptr[i]);
}
 }
