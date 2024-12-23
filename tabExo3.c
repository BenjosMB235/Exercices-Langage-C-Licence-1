#include <stdio.h>
int main(void) 
{
	int i,j,N,occ[100];
	printf("Entrez l'entier n, dimension du tableau:\n");
	scanf("%d", &N);
	int tab[N];
	for(i=0; i<N; i++)
	{
	printf("Entrez l'entier %d = ", i);
	scanf("%d", &tab[i]);
	}
	for (i=0; i<N; i++)
	 occ[i]=0;
	for(i=0;i<N;i++)
	  occ[tab[i]]++;
	for(i=0;i<N;i++)
	 if (occ[i] != 0)
	   printf("%d est repete %d fois\n", i, occ[i]);
	return 0;
}
