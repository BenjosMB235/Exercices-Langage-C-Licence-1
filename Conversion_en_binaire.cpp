#include <stdio.h>
main()
{
	int N,A,i;
	A=0;
	printf("Entre un entier:\n");
	scanf("%d", &N);
	while (N/2 != 0)
	 {
	 	A=A+i*(N%2);
	 	N=N/2;
	 	i=i*10;
	 }
	 A=A+i*(N%2);
	 printf("%d", A);
	 return 0;
}
