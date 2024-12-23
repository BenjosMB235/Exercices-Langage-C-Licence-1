#include <stdio.h>
int main()
{
	int h1,m1,s1,h2,m2,s2;
	printf("Entrez le premier instant dans le format HH:MM:SS\n");
	scanf("%d:%d:%d", &h1,&m1,&s1);
	printf("Entrez le second instant dans le format HH:MM:SS\n");
	scanf("%d:%d:%d", &h2,&m2,&s2);
	if (h1>h2)
	   printf("le deuxieme instant vient avant le premier");
	else if (h2>h1)
	       printf("Le premier instant vient avant le second");
	        else	if (m1>m2)
	                    printf("le deuxieme instant vient avant le premier");
                       	else if (m2>m1)
	                            printf("Le premier instant vient avant le second");
                            	else if (s1>s2)
	                                     printf("le deuxieme instant vient avant le premier");
                                       	else if (s2>s1)
	                                            printf("Le premier instant vient avant le second");
	                                            else
	                                            printf("Ce sont les memes instants");
	return 0;
}
