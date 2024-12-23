#include <stdio.h>
main()
{
	int i,j;
	printf("--*");
	for(i=1; i<=19; i++)
	   printf("-*");
	printf("-*--");
	printf("\n");
	printf("--*");
	for(i=1; i<=19; i++)
	   printf("  ");
	printf("*--");
	printf("\n");
	i=1;
	while (i<=5)
	{
	printf("--*");
	printf("  ");
	for(j=1; j<=3; j++)
	  printf(" *-*-*-*-*  ");
	printf("*--");
	printf("\n");
	i++;
    }
	printf("--*");
	for(i=1; i<=19; i++)
	   printf("  ");
	printf("*--");
	printf("\n");
	printf("--*");
	for(i=1; i<=19; i++)
	   printf("-*");
	printf("-*--");
	printf("\n");
}
