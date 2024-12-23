#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char A='r';
	char B='t';
	char *p1, *p2, *p3;
	p1 = &A;
	p2 = &B;
	printf("Avant : A=%c et B=%c \n", *p1, *p2);
	p3 = p1;
	p1 = p2;
	p2 = p3;
	printf("Après : A=%c et B=%c", *p1, *p2);
	
	return 0;
}
