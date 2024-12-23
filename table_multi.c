#include <stdio.h>
int main(int argc, char *argv[])
{
	const int MAX =9;
	int i,j;
	printf("X*Y |");
	for (j=1; j<=MAX; j++)
	     printf("%4d", j);
	 printf("\n");
	 printf("___");
	 for (j=1; j<=MAX; j++)
	     printf("____");
	 printf("\n");
	 for (i=1; i<=MAX; i++)
	   {
	       printf("%3d |", i);
	       for(j=1; j<=MAX; j++)
	          printf("%4d", i*j);
	       printf("\n");
	   }
	   return 0;
}
