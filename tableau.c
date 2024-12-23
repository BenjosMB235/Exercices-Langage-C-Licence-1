#include <stdio.h>
//#define N 
int main(void)
{
	int i,N;
	int max,min,soe;
	printf("Entrez l'entier n, dimension du tableau:\n");
	scanf("%d", &N);
	int tab[N];
	for(i=0; i<N; i++)
	{
	printf("Entrez l'entier %d = ", i+1);
	scanf("%d", &tab[i]);
	}
	printf("Voici les entiers saisis:\n");
	for (i=0; i<N; i++)
	  printf("[%d]\t", tab[i]);
	  //Determination de max et min
	 min=tab[0];
	 max=tab[0];
	 soe=0;
	 for(i=0; i<N; i++)
	   {
	       if (tab[i]<min)
	           min=tab[i];
	       if (tab[i]>max)
	            max=tab[i];
	        soe=soe +tab[i];
	   }
	   //moy=(soe/5);
	   printf("\n");
	   printf("La somme de ces entiers est: %d\n", soe);
	   printf("Le maximum est: %d\n", max);
	   printf("Le minimum est: %d\n", min);
	return 0;
}
