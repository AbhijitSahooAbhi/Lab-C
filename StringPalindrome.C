#include<stdio.h>
#include<string.h>
char plain(char str[20])
{
	int temp=0,len,i;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
	if(str[i]!=str[len-i-1])
	temp=1;
	}
	if(temp)
	{
		printf("strinng is not a palindrome");
	}
	else
	{
		printf("string is plaindrome");
	}
	return 1;
}
int main()
{
	char ab[20];
	
	printf("Enter a string:");
	scanf("%s",ab);
	printf("%s",plain(ab));
return 0;
}
