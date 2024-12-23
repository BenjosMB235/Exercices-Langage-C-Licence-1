#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char x[100];
	printf("Entrez un caractere:\n");
	scanf("%s", x);
	int i, j;
	j=strlen(x);
	for(i=0; i<j; i++)
	{
		if ((x[i]>='a')&&(x[i]<='z'))
	  			x[i] = x[i]-'a'+'A';
		else if ((x[i]>='A') && (x[i]<='Z'))
    	  		x[i] = x[i]-'A'+'a';
    }
    printf("Votre chaine est %s", x);
    
	return 0;
}
