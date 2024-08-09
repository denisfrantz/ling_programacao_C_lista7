#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[50], b[50], *p;
	int i, j;
	
	printf ("STRING 1: ");
	gets (a);
	printf ("STRING 2: ");
	gets (b);
	
	for (i = 0; a[i] < '\0'; i++);
	for (j = 0; b[j] < '\0'; j++);
	
	p = (char *) malloc((i + j) * sizeof(char));
	
    j=0;
	for (i = 0; a[i]!='\0'; i++)
    {   
		p[j]=a[i];
        j++;
    }
    
    p[j] = ' ';
    j++;
    
    for (i = 0; b[i]!='\0'; i++)
    {
	    p[j] = b[i];
        j++;
    }
    
    printf ("\nSTRING FINAL: ");
    for(i= 0; i < j; i++)
		printf("%c", p[i]);
	
	return 0;
}
