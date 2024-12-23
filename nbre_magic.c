#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,m=5;
	do
	{
	printf("Entrez un entier:\n");
	scanf("%d", &n);
	  if (n>m)
	     printf("Le nombre est au dessous de votre nombre\n");
	  if (n<m)
	     printf("Le nombre est au dessus de votre nombre\n");
	 // if (n==m)
	     //printf ("Bravo, vous avez deviné");
    }
    while (n != m);
    printf ("Bravo, vous avez deviné");
    
	
	return 0;
}
