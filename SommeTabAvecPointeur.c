#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i, N, Tab[200];
	printf("Entrez la dimension souhaitée de votre tableau(elles doit etre inferieur a 200) : \n");
	scanf("%d", &N);
	int *P, soe;
	P = Tab;
	soe = 0;
	for (i=0; i<N; i++)
	{
		printf("Entrez la valeur de %d \n", i+1);
		scanf("%d", (P+i));
		soe = soe + *(P+i);
	}
	printf("La somme des valeurs de votre tableau est %d", soe);
	
	return 0;
}
