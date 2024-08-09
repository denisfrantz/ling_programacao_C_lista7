#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[10], i, x, par, *p;
	
	srand(time(NULL));
	
	printf ("VETOR\n=====\n");
	for (i = 0; i < 10; i++)
	{
		vetor[i] = rand() % 10;	
		printf ("%d ", vetor[i]);
		if (vetor[i] % 2 == 0)
			par++;
	}
	
	p = (int *) malloc(par * sizeof(int));
	
	printf ("\n\nVETOR COM OS NUMEROS PARES\n==========================\n");
	for (i = 0; i < 10; i++)	
		if (vetor[i] % 2 == 0)
		{
			p[x] = vetor[i];
			printf ("%d ", p[x]);
			x++;	
		}
		
	free (p);
	
	return 0;
}
