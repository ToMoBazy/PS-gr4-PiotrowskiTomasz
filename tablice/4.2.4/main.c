#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func(int n, int tab[])
{
    int iloczyn=1;
    for(int i=0;i<n;i++) iloczyn*=tab[i];
    return pow(iloczyn,1.0/n);
}

void uzupelnij(int m, int n, int tab[])
{
    for(int i=0;i<n;i++) tab[i]=m*(i+1);
}
void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++) printf("%i\n", tab[i]);
}
int main()
{
    int n=5;
    int tab[n];
    uzupelnij(6, n,tab);
    wypisz(n,tab);
    printf("Srednia geometryczna = %f\n", func(n,tab));

    uzupelnij(5, n,tab);
    wypisz(n,tab);
    printf("Srednia geometryczna = %f\n", func(n,tab));

    uzupelnij(4, n,tab);
    wypisz(n,tab);
    printf("Srednia geometryczna = %f", func(n,tab));
    return 0;
}
