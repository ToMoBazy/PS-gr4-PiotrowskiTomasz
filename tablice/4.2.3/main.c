#include <stdio.h>
#include <stdlib.h>

double srednia(int n, const int tab[])
{
    double wynik=0;
    for(int i=0;i<n;i++) wynik+=tab[i];
    return wynik/n;
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
    const int tab[n];
    uzupelnij(3, n, tab);
    wypisz(n, tab);
    printf("Srednia arytmetyczna = %.1f\n", srednia(n, tab));

    uzupelnij(5, n, tab);
    wypisz(n, tab);
    printf("Srednia arytmetyczna = %.1f\n", srednia(n, tab));

    uzupelnij(4, n, tab);
    wypisz(n, tab);
    printf("Srednia arytmetyczna = %.1f", srednia(n, tab));
    return 0;
}
