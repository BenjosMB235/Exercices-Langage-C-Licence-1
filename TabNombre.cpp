#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Entrez la dimension de votre tableau:\n");
	scanf("%d", &n);
	int temp,t[n];
	for(i=1;i<=n;i++)
	{
	printf("Entrez l'entier %d:", i);
	scanf("%d", &t[i]);
    }
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	if (t[i]<t[j])
    	{
    		temp=t[i];
    		t[i]=t[j];
    		t[j]=temp;
    		
		}
	}
	printf("[");
	for(i=1;i<=n;i++)
	{
		printf("%d",t[i]);
		if (i != n)
		   printf(",");
	}
	printf("]");
	return 0;
}
