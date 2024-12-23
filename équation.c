#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c,D;
	printf("Entrez le coefficient a:\n");
	scanf("%f", &a);
	printf("Entrez le coefficient b:\n");
	scanf("%f", &b);
	printf("Entrez le coefficient c:\n");
	scanf("%f", &c);
	D=(b*b)-(4*a*c);
	if (D<0)
	  printf("Pas de solution");
	else if (D==0)
	      printf("La solution est:%f", -b/2*a);
	       else
	       printf("La solution est:\n");
	       printf("X1=%f\n", (-b-sqrt (D))/2*a);
	       printf("X2=%f\n", (-b+sqrt (D))/2*a);
	 return 0;
	
}