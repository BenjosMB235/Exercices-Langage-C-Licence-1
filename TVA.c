#include <stdio.h>
#include <stdlib.h>

float tva(float ht, float ttva){
	float Tva;
	Tva = ht*ttva;
	return Tva;
}
int main()
{
	float tva(float, float);
	float ht, ttva, TVa;
    printf("Entrez le prix hors taxe de votre produit:\n");
	scanf("%f", &ht);
	printf("Entrez le ttva:\n");
	scanf("%f", &ttva);
	TVa=tva(ht, ttva);
	printf("le prix tout taxe de votre produit est : %f", ht+TVa);
	system("pause");
    return 0;
}
