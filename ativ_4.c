#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i, j, lin, col, **matriz;
	
	printf ("ARRAY BIDIMENSIONAL\n===================\n");
	printf("Linhas: ");
	scanf("%d", &lin);
	printf("Colunas: ");
	scanf("%d", &col);
	
	matriz = (int *) malloc(lin * sizeof(int*));
	
	for (i = 0; i < lin; i++)
   		matriz[i] = (int *) malloc(col * sizeof(int));
	
	system ("cls");
	printf ("ARRAY BIDIMENSIONAL\n===================\n");
	
	srand(time(NULL));
	
	for (i = 0; i < lin; i++)
   	{
   		for (j = 0; j < col; j++)
      	{
      		matriz[i][j] = rand() % 10;
      		printf ("%d ", matriz[i][j]);
		}
      	printf ("\n");
	}	
    
	free (matriz);
		
	return 0;
}

