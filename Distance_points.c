#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int Xa,Ya,Xb,Yb;
	double Dist;
	printf("Entrez les coordonnées de A:\n");    
	scanf("%d" "%d", &Xa, &Ya);
	printf("Entrez les coordonnées de B:\n");
	scanf("%d" "%d", &Xb, &Yb);
	Dist=sqrt(pow(Xa-Xb, 2)+pow(Ya-Yb, 2));    
	printf("La distance entre A(%d,%d) et B(%d,%d) est %.2f\n", Xa,Ya,Xb,Yb,Dist);
	return 0;
}
