#include <stdio.h>
int main(void)
{
	float a;
	printf("Entrez un reel:\n");
	scanf("%f", &a);
	if (a==int(a))
	   printf("%f est un entier", a);
	   else
	    printf("Ce bien un réel");
	return 0;
}
