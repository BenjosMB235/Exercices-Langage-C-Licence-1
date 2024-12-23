#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,j;
	int tab[10][10];
	printf("La table de multiplication est:\n");
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
		tab[i][j]=i*j;
		printf("%d*%d=%d\t",i,j,tab[i][j]);
    	}
    	printf("\n");
	}
	return 0;
}
