#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,r,cp,s=0;
	printf("Entre un nombre:\n");
	scanf("%d", &n);
	cp=n;
	while (n>0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if (cp==s)
	  printf("Le nombre est palindrome");
	  else 
	  printf("C'est pas un palindrome");
	return 0;
}
