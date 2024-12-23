#include <stdio.h>
int main(void)
{
	int jr, mo, an;
	printf("Entrez votre date de naissance:\n");
	scanf("%d/%d/%d", &jr, &mo, &an);
	/*printf("Entrez votre jour de naissance:\n");
	scanf("%d", &jr);
	printf("Entrez votre numero de mois de naissance:\n");
	scanf("%d", &mo);
	printf("Entrez votre année de naissance:\n");
	scanf("%d", &an);
	*/
	printf("Vous etes ne ");
	 if ((mo>=3)&&(mo<=5))
	             printf("au Printemps");
	             else if ((mo>=6)&&(mo<=8))
	                      printf("en Eté");
	                      else if ((mo>=9)&&(mo<=11))
	                              printf("en Automne");
	                              else
	                              printf("en Hiver");
	printf(" plus precisement le ");
	 if (jr<10) 
	    printf("0%d-", jr);
	    else
	    printf("%d-", jr);
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
