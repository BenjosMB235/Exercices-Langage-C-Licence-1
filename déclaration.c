#include <stdio.h>
int main(void)
{
    char papiers, rad;
    puts("Avez vous vos papiers ? (y/n)");
    papiers=getchar();
    getchar();
    puts("Avez-vous quelque chose à declarer ? (y/n)");
    rad=getchar();
    if (papiers != 'y' || rad != 'n')
        puts ("Attendez là s'il vous plait.");
    return 0;
}
