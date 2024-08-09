#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p;
	
	p = x;
	printf ("%d", *(x + 2));
	
	p = x;
	printf ("\n%d", *(x + 4));
	
	p = x;
	printf ("\n%d", x + 4);
	
	p = x;
	printf ("\n%d", x + 2);
	
	return 0;
}
