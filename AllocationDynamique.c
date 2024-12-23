#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	float *n, *soe, *max, *min, *moy;
	int i;
	
	 n = malloc(sizeof(float));
	 soe=malloc(sizeof(float));
	 max=malloc(sizeof(float));
	 min=malloc(sizeof(float));
	 moy=malloc(sizeof(float));
	 
	*soe=0;
	*min=21;
	*max=0;
	 
	if (n==NULL) 
	{
		exit(0);
	}
	if (soe==NULL)
	{
		exit(0);
	}
	if(min==NULL)
	{
		exit(0);
	}
	if (max==NULL)
	{
		exit(0);
	}
	if(moy==NULL)
	{
		exit(0);
	}
	printf("Veuillez entrer les cinq notes:\n");
	for(i=0; i<5; i++)
	{
		printf("Veuillez entrer la note %d\n", i+1);
		scanf("%f", n);
		*soe = *soe + *n;
		if (*n > *max)
		   *max = *n;
		if (*min > *n)
		   *min = *n;
	}
	*moy = *soe/5;
	printf("La moyenne est %.2f \n", *moy);
	printf("Le maximum est %.2f \n", *max);
	printf("Le minimum est %.2f \n", *min);
	
	free(n);
	free(soe);
	free(max);
	free(min);
	free(moy);
	 
	return 0;
}
