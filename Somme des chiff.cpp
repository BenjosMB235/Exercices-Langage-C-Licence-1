#include<stdio.h>
int main ()
{
	int a,q,r,s;
	printf("Entrez un entier:\n");
	scanf("%d", &a);
	q=(a/10);
	r=(a%10);
	s=(q+r);
	printf("la somme est %d", s);
	return 0;
}
