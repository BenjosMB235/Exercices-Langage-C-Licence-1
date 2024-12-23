#include <stdio.h>
int main()
{
	int l,c,i,j;
	printf("Entrez le nombre de lignes et de colonnes:\n");
	scanf("%d %d", &l, &c);
	int tab[l][c],max,min;
	printf("Remplissez le tableau!\n");
	for(i=1;i<=l;i++)
	{
		printf("Les notes de l'etudiant %d\n", i);
		for(j=1;j<=c;j++)
		  scanf("%d", &tab[i][j]);
	}
	printf("Votre tableau ressemble à ça:\n");
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=c;j++)
		  printf("%4d", tab[i][j]);
		printf("\n");
	}
	for(i=1;i<=l;i++)
	{
	  max=tab[1][j];
	  for(j=1;j<=c;j++)
	    {
	    	if (tab[i][j]>max)
	    	   max=tab[i][j];
		}
	}
	printf("Le max est %d", max);
	for(j=1;j<=c;j++)
	{
	  min=tab[i][1];
	  for(i=1;i<=l;i++)
	    {
	    	if (tab[i][j]<min)
	    	   min=tab[i][j];
		}
	}
	printf("Le min est %d", min);
	return 0;
}
