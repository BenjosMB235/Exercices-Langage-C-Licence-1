#include <stdio.h>
main()
{
	float a,f;
	printf("Entrez un reel:\n");
	scanf("%f", &a);
	f=a-(int)a;
	printf("La partie fractionnaire de %f est %.2f", a,f);
}
