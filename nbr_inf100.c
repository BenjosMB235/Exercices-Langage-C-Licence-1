#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int som,nbr,n,max;
	som=0;
	max=0;
	n=1;
	printf("Entrez une serie d'entiers:\n");
	while(n != 0)
	{ 
			do{
			    scanf("%d", &n);
				if(n>100)
		          printf("Entrez un entier inferieur a 100 svp\n");
			}
			while(n>100);
			som+=n;
			if (n>max)
			   max=n;
	}
	printf("La somme: %d\n", som);
	printf("Le maximum est: %d\n", max);
	system ("pause");
	return 0;
}
