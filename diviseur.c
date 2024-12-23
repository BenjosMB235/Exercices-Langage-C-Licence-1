#include<stdio.h>
int main(void)
{
   int n,d,i;
   printf("Entrez un entier:\n");
   scanf("%d", &n);
   i=1;
   while ( i<=n)
     {
         d=n%i;
         if (d==0)
           printf("%d est un diviseur de %d\n",i,n);
        i++;
     }
    return 0;
}
