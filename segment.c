#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{ 
    float x1,y1,x2,y2,a,b,AC,CB,AB;
    printf("Entrez les coordonnees des extremites du segment:\n");
    printf("les coordonnees de A:\n");
    scanf("%f %f", &x1,&y1);
    printf("les coordonnees de B:\n");
    scanf("%f %f", &x2,&y2);
	printf("Entrez les coordonnees du point C:\n");
    scanf("%f %f", &a,&b);
    AC=sqrt(pow(a-x1, 2)+pow(b-y1, 2));
    CB=sqrt(pow(x2-a, 2)+pow(y2-b, 2));
    AB=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    if (AC+CB==AB)
       printf("C appartient a AB");
       else 
       printf("C n'appartient pas a AB");
    
	return 0;
}
