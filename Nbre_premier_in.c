 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int i,j,k,div,a;
 	printf("Entrez un entier: \n");
 	scanf("%d", &a);
 	printf("Les nombres premiers qui sont inferieurs a votre nombre sont:\n");
 	for(i=2;i<a;i++)
 	{
 		for(j=2, k=2; j<=(i-1); j++)
 		{
 			div=i%j;
 			if (div==0)
 			 k=k+1;
		 }
		if (k==2)
		 printf("%d\n", i);
	 }
	return 0;
}
