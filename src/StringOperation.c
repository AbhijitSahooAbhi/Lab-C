#include<stdio.h>
#include<string.h>
void str_cat(char *p,char *q);
void main()
{
 int option,i,j,v=0,c;
 char str[50],*ptr,str2[50],str3[50];
 printf("Enter a string:");
 gets(str);
 ptr=&str;
 printf("\nMENU of perfrom string operation: ");
 printf("\nHERE IN SOME OPERATION REQUIED TWO STRING, ONE STRING IS ALRADY ENTERED BY YOU AND ANOTHER STRING IS ENTER AFTER YOU ENTERED OPTION NUMBER,IF THAT OPERATION REQUIRED TWO STRING,ELSE OPERATION PERFROM ALREADY ENTERED STRING");
 printf("\n1.Show address of each character in string.");
 printf("\n2.Concatenate two strings without using strcat function.");
 printf("\n3.Concatenate two strings using strcat function.");
 printf("\n4.Compare two strings");
 printf("\n5.Calculate the lenth of string (use pointer).");
 printf("\n6.Convert all lowercase character to upper case.");
 printf("\n7.Convert all uppercase character to lowercase.");
 printf("\n8.Calculate the number of vowels.");
 printf("\n9.Reverse the string");
 printf("\nEnter a option number from(1 to 9) to do operation on string-");
 scanf("%d",&option);
 switch(option)
 {
 case 1:
 for(i=0;str[i]!='\0';i++)
 {
 printf("\n%c is stored in adress- %u",ptr[i],&ptr[i]);
 }
 break;
 case 2:
 printf("To do this operation there is need another string ,so please enter another string-");
 fflush(stdin);
 gets(str2);
 for(i=0,j=0;str[i]!='\0';i++,j++)
 {
 str3[j]=str[i];
 }
 for(i=0,j;str2[i]!='\0';i++,j++)
 {
 str3[j]=str2[i];
 }
 str3[j]='\0';
 printf("\nAfter concatination the final string is =%s",str3);
 break;
 case 3:
 printf("To do this operation there is need another string ,so please enter another string-");
 fflush(stdin);
 gets(str2);
 printf("\nAfter concatination the final string is=%s",strcat(str,str2));
 break;
 case 4:
 printf("To do this operation there is need another string ,so please enter another string-");
 fflush(stdin);
 gets(str2);
 c=stricmp(str,str2);
 if(c>0)
 printf("the length of (%s) is gerter than (%s)",str,str2);
 if(c==0)
 printf("the length of (%s) is equal to (%s)",str,str2);
 if(c<0)
 printf("the length of (%s) is less than (%s)",str,str2);
 break;
 case 5:
 for(i=0;ptr[i]!=0;i++);
 printf("\nThe length of the string is =%d",i);
 break;
 case 6:
 printf("After converting all lower case letter to Upper case the string is=%s",strupr(str));
 break;
 case 7:
 printf("After converting all upper case letter to lower case the string is=%s",strlwr(str));
 break;
 case 8:
 for(i=0;i<str[i]!=0;i++)
 {
 
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
 {
 v++;
 } 
 }
 printf("\nThe number of vowels in string=%d",v);
 break;
 case 9:
 printf("After reverse the string is=%s",strrev(str));
 break;
 default :
 printf("\nINVALID OPTION YOU ENTERED");
 }
}
