#include <stdio.h>
main()
{
	int n,i;
	printf("Entrez un entier :\n");
	scanf("%d", &n);
	printf("Les trois entiers impairs qui suivent ce nombre sont:\n");
	for(i=(n+1);i<=(n+6);i++)
	 {
	 	if (i%2==1)
	 	  printf("%2d", i);
	 }
	 return 0;
}
