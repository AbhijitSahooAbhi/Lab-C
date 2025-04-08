#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
	for(k=1; k!=i*2; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    getch();
}
