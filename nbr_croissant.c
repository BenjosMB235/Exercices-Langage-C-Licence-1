#include <stdio.h>
int main(void)
{
	int a,b,c;
	printf("Entrez a:\n");
	scanf("%d", &a);
	printf("Entrez b:\n");
	scanf("%d", &b);
	printf("Entrez c: \n");
	scanf("%d", &c);
	if ((a>=b)&&(b>=c))
     	printf("L'ordre est %d %d %d",c,b,a);
     	else if ((a>=c)&&(c>=b))
     	         printf("L'ordre est %d %d %d", b,c,a);
     	         else if ((b>=a)&&(a>=c))
     	         printf("L'ordre est %d %d %d", c,a,b);
     	         else if ((b>=c)&&(c>=a))
     	           printf("L'ordre est %d %d %d", a,c,b);
     	           else if ((c>=a)&&(a>=b))
     	           printf("L'ordre est %d %d %d",b,a,c);
     	           else if((c>=b)&&(b>=a))
     	           printf("L'ordre est %d %d %d", a,b,c);
	return 0;
}
