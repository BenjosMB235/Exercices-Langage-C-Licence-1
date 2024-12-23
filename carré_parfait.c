#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int a,b;
	printf("Entrez un entier\n");
	scanf("%d", &a);
	b=sqrt(a);
	if (pow(b,2)==a)
	   printf("%d est un carre parfait", a);
	   else
	   printf("Ce n'est pas un carre parfait");	 
	return 0;
}
