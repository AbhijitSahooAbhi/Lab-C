//assignment 20
#include<stdio.h>
#include<stdlib.h> //for exit()
void main()
{
	FILE *source,*target;
	char filename[100],c;
	//clrscr();
	printf("Enter the file name for open:\n");
	scanf("%s",filename);
	source=fopen(filename,"r");
	if(source==NULL)
	{
		printf("%s file is empty or invalid",filename);
		exit(0);
	}
	printf("Enter the file name to open for writing \n");
	scanf("%s",filename);
	target=fopen(filename,"w");
	if(target==NULL)
	{
		printf("\n %s file is empty or invalid",filename);
		exit(0);
	}
	c=fgetc(source);
	while(c!=EOF)
	{
		fputc(c,target);
		c=fgetc(source);
	}
	printf("\n contents copied successful to %s",filename);
	fclose(source);
	fclose(target);
	//getch();
}
