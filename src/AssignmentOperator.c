//Assignment Operators

#include <stdio.h> 
#include <conio.h>
 
int  main() 
{ 
	int a=10;

	printf( "\n (a += 10) is = %d", (a += 10) );
	printf( "\n (a *= 10) is = %d", (a *= 10) );
	printf( "\n (a -= 5) is = %d", (a -= 5) );
	printf( "\n (a /= 3) is = %d", (a /= 3) );

		getch();
	return 0;
}