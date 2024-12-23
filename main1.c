#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a, b;
	char op;
	printf("Saisir la 1e valeur:\n");
	scanf("%d", &a);
	printf("Saisir la 2e valeur:\n");
	scanf("%d", &b);
	printf("Entrez l'operateur:\n");
	scanf(" %c ", &op);

	    if (op=='+')
		  printf("Le resultat est: %d", a+b);
	    
	    if (op=='-') 
		  printf("Le resultat est: %d", a-b);
	
	    if (op=='*')
		  printf("Le resultat est: %d", a*b);
		  
	    if (op=='/')
		  printf("Le resultat est: %d", a/b);
	    
	return 0;
}
