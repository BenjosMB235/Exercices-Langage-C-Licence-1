#include <stdio.h>

void main(void)
{
	int a, b;
	char op;
	printf("Saisir la 1e valeur:\n");
	scanf("%d",&a);
	printf("Saisir la 2e valeur:\n");
	scanf("%d",&b);
	printf("Entrez l'operateur:\n");
	rewind(stdin);
	op=getchar();
	//scanf("%c",&op);
	
	switch(op)
	{
	    case '+': printf("Le resultat est: %d", a+b);
	    break;
	     case '-': printf("Le resultat est: %d", a-b);
	    break;
	     case '*':printf("Le resultat est: %d", a*b);
	    break;
	     case '/':printf("Le resultat est: %f", a/b);
	    break;
	    default: printf("L'opérateur est incorrect");
	    
	    break;
	}
	//return 0;
}
