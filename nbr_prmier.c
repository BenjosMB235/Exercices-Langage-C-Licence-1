#include <stdio.h>
int main(void)
{
	int n, i, div, k;
	printf("Entrez un entier:\n ");
	scanf("%d", &n);
	for (i=2, k=2; i<=(n/2); i=i+1)
	    {
	          div=n%i;
	          if (div==0)
	            k=k+1;
	    }
	 if (k>2)
	   printf("Votre nombre n'est pas un nombre premier");
	   else
	    printf("C'est un nombre premier");
	  return 0;
}
