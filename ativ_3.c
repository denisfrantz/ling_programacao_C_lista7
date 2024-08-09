#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, *p, qntd, neg, pos;
	
	neg = 0;
	pos = 0;
	
	printf ("Tamanho do vetor: ");
	scanf ("%d", &qntd);
	
	system ("cls");
	
	p = (int *) malloc(qntd * sizeof(int));
	
	printf ("VETOR\n=====\n");
	for (i = 0; i < qntd; i++)
	{
		printf ("[%d]: ", i + 1);
		scanf ("%d", &p[i]);
		
		if (p[i] < 0)
			neg++;
		else
			if (p[i] > 0)
				pos++;
	}
	
	printf ("\nO array contem %d numero(s) negativo(s) e %d numero(s) positivo(s)", neg, pos);
	
	free (p);	
	
	return 0;
}
