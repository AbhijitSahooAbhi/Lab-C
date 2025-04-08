#include<stdio.h>
#define SWAP(x, y, z) z=x; x=y; y=z;
void main()
{
int x, y, z;
printf("Enter two number:");
scanf("%d %d",&x, &y);
printf("\n before Swap the number is %d, %d", x, y);
SWAP(x, y, z);
printf("\n After swap the number is %d, %d", x, y);
}
