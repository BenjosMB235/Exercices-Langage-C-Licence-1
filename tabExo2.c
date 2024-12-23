#include <stdio.h>
int main(void) 
{
	int i,j,N;
	int M;
	printf("Entrez l'entier n, dimension du tableau:\n");
	scanf("%d", &N);
	int tab[N];
	for(i=0; i<=(N-1); i++)
	{
	printf("Entrez l'entier %d = ", i+1);
	scanf("%d", &tab[i]);
	}
	printf("Entrez un nombre à supprimer toutes ses occurrences:\n");
	scanf("%d", &M);
	printf("Voici les entiers saisis avant la suppression des occurrences de %d:\n", M);
	for (i=0; i<=(N-1); i++)
	  printf("%d\t", tab[i]);
	printf("\n");
	for(i=0; i<N;i++)
	{
		if (tab[i]==M)
		{
			for(j=i;j<(N-1);j++)
			  tab[j]=tab[j+1];
			N--;
			i--;
		}
	}
	printf("Voici les entiers saisis apres la suppression des occurences de %d:\n", M);
	for (i=0;i<N;i++)
	{
			printf("%d\t", tab[i]);
    }
	
	return 0;
}
