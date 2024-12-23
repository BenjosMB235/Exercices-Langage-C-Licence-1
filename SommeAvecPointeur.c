#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A, B, S;
	int *P1, *P2, *P;
	P1 = &A;
	P2 = &B;
	P = &S;
	
	printf("Entrez la première valeur :\n");
	scanf("%d", P1);
	printf("Entrez la seconde valeur :\n");
	scanf("%d", P2);
	*P = (*P1) + (*P2);
	printf("La sommes est : %d", *P);
	
	return 0;
}
