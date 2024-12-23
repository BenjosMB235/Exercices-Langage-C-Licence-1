#include <stdio.h>
int main(void)
{
	int jr, mo, an;
	printf("Entrez votre date de naissance sous le format jj/m/annee\n:\n");
	scanf("%d/%d/%d", &jr,&mo,&an);

	printf("Vous êtes né en ");
	 if ((mo>=3)&&(mo<=5))
	             printf("Printemps");
	             else if ((mo>=6)&&(mo<=8))
	                      printf("Eté");
	                      else if ((mo>=9)&&(mo<=11))
	                              printf("Automne");
	                              else
	                              printf("Hiver");
	printf(" plus précisement le %d-", jr);
	switch(mo)
	{
	    case 1: printf("Janvier");
	    break;
	    case 2: printf("Fevrier");
	    break;
	    case 3: printf("Mars");
	    break;
	    case 4: printf("Avril");
	    break;
	    case 5: printf("Mai");
	    break;
	    case 6: printf("Juin");
	    break;
	    case 7: printf("Juillet");
	    break;
	    case 8: printf("Aout");
	    break;
	    case 9: printf("Septembre");
	    break;
	    case 10 : printf("Octobre");
	    break;
	    case 11: printf("Novembre");
	    break;
	    case 12: printf("Decembre");
	    break;
	    default: printf("Votre mois de naissance n'existe pas\n");
	    break;
	}
	printf("-%d", an);
	return 0;
}
