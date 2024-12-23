#include <stdio.h>
#include <math.h>
int main(void)
{
	int x, y, r=0;
	printf("Entrez la valeur de x:\n");
	scanf("%d", &x);
	printf("Entrez la valeur de y:\n");
	scanf("%d", &y);
	r=pow(x, y);
	printf("Le resultat est %d", r);
	return 0;
}