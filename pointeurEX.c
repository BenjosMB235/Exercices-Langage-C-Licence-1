#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int *memoireAllouee == NULL;
	
	memoireAllouee = malloc(sizeof(int));
	
	if (memoireAllouee == NULL)
	{
		exit(0);
	}
	printf("Quel age avez-vous ? \n");
	scanf("%d", memoireAllouee);
	
	printf("Vous avez %d ans\n", *memoireAllouee);
	
	free(memoireAllouee);
	return 0;
}
