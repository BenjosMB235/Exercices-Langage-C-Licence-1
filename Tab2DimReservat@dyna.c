#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, l, c;
	printf("Entrez les dimensions de votre tableau :\n");
	scanf("%d %d", &l, &c);
	int **Tab;
		Tab = (int **)malloc(l*sizeof(int *));
	
	for(i=0; i<l; i++)
	{
		Tab[i] = (int *)malloc(c*sizeof(int));
	}
	if (Tab == NULL)
	{
		exit(0);
	}
	printf("Veuillez remplir votre tableau:\n");
	for(i=0; i<l; i++)
	{
		printf("Les valeurs dans la ligne %d\n", i+1);
		for(j=0; j<c; j++)
		{
			scanf("%d", &Tab[i][j]);
		}
	}
	printf("Votre tableau est :\n");
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
		printf("%d\t", Tab[i][j]);
		printf("\n");
		}
	}
	for(i=0; i<l; i++)
	{
		free(Tab[i]);
	}
	free(Tab);
	return 0;
}
