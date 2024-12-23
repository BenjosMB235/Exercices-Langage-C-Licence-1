#include <stdio.h>
main()
{
	int Lig,L,Esp,i;
	do
	{
		printf("Nombres de lignes:");
		scanf("%d", &Lig);
	}
	while (Lig<1 || Lig>20);
	for(L=0;L<Lig;L++)
	{
		Esp=Lig-L-1;
		for(i=0;i<Esp;i++)
		putchar(' ');
		for(i=0;i<2*L+1;i++)
		putchar('*');
		putchar('\n');
	}
	return 0;
}
