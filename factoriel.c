#include <stdio.h>
int main(void)
{
	int n, i, f;
	printf("Entre un entier:");
	scanf("%d", &n);
	for(i=1, f=1; i<=n; i=i+1)
	  f=f*i;
	 printf("%d != %d\n",n,f);
	return 0;
}
