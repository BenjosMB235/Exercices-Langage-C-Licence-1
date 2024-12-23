#include <stdio.h>
int main(void)
{
	float soe, max, min, moy, note;
	int nbr_note, i;
	printf("Entrez le nombre de note:\n");
	scanf("%d", &nbr_note);
	min=20;
	max=1;
	soe=0;
	for(i=1; i<=nbr_note; i=i+1)
	{
	    printf("Entrez la note :\n");
	    scanf("%f", &note);
	    if (note<min)
	        min=note;
	    if (note>max)
	        max=note;
	     soe=soe+note;
	}
	moy=(soe/nbr_note);
	printf("La moyenne des notes est %f\n",moy);
	printf("Le maximum est %f\n", max);
	printf("Le minimum est %f\n", min);
}
