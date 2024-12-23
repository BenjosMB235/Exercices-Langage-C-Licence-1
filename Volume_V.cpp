#include <stdio.h>
int main()
{
	int V,x,n;
	printf("Entrez le volume v de soda:\n");
	scanf("%d", &V);
	x=V*100;
	n=x/33;
	printf("Le nombre de canettes de 33cl dans ce volume est %d", n);
	return 0;
}
