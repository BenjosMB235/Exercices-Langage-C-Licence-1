#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i, *Tab, n;
	printf("Entrez la dimension souhait�e de votre tableau : \n");
	scanf("%d", &n);
	/*On reserve l'espace memoire pour un tableau en for�ant la fonction malloc a �tre sur int(entier)*/
	Tab =(int*) malloc(n*sizeof(int));
	if (Tab==NULL)
	{
	 	exit(0);
	}
	printf("Entrez les valeurs du tableau:\n");
	if (n != 0)
	{
		for(i=0; i<n; i++)
		{
			printf("Entrez la valeur %d: \t", i+1);
			scanf("%d", Tab+i);
		}
		printf("Les valeurs entr�es sont:\n");
		for(i=0; i<n; i++)
		{
			printf("Valaeur %d = %d \n", (i+1), Tab[i]);
		}
	}
	else{
		printf("Pas de valeur");
	}
	free(Tab);
	return 0;
	
}
