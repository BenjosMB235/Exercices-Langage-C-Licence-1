#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *tab[]={"Suresh", "Siva", "Sona", "Bajui", "Ritu"};
	char *p;
	int i;
	p=tab[2];
	tab[2]=tab[3];
	tab[3]=p;
	for(i=0; i<5; i++)
	 printf("%s\n", tab[i]);
	return 0;
}

