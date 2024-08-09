#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i, *p, *q, tam_p, tam_q, soma;
	
	printf ("ARRAY 1\n=======\n");
	printf ("Tamanho: ");
	scanf ("%d", &tam_p);
	
	printf ("\nARRAY 2\n=======\n");
	printf ("Tamanho: ");
	scanf ("%d", &tam_q);
	
	system ("cls");

	p=(int*)malloc(tam_p * sizeof(int));
	q=(int*)malloc(tam_q * sizeof(int));
	
	srand (time(NULL));
	
	printf ("ARRAY 1\n=======\n");
	for (i = 0; i < tam_p;i++)
	{
		p[i] = rand()%10;
		printf ("%d ", p[i]);
	}
	
	printf ("\n\nARRAY 2\n=======\n");
	for (i = 0; i < tam_q;i++)
	{
		q[i] = rand()%10;
		printf ("%d ", q[i]);
	}
	
	printf("\n\nSoma das posicoes correspondentes:\n\n");
	
	if (tam_p > tam_q)
		for (i = 0; i < tam_q; i++)
			printf("[%d] + [%d] = %d\n", i, i, p[i] + q[i]);
			
	else
		for (i = 0; i < tam_p; i++)
			printf("[%d] + [%d] = %d\n", i, i, p[i] + q[i]);

	free (p);
	free (q);
		
	return 0;
}

