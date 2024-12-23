#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int nbr, n,i;
	print("Entrez le nombre de la série:\n");
	scanf("%d", &nbr);
	for(i=0; i<=nbr;i++)
	{
		printf("Entre l'entier %d", i);
		scanf("%d", &n);
		if (n>100)
		   continue;
	
	}
	
	return 0;
}
