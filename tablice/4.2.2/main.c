#include <stdio.h>
#include <stdlib.h>

double srednia(int n, int tab[])
{
    double wynik=0;
    for(int i=0;i<n;i++) wynik+=tab[i];
    return wynik/n;
}

int suma(int n, int tab[])
{
    int wynik=0;
    for(int i=0;i<n;i++) wynik+=tab[i];
    return wynik;
}

int sumakwadratu(int n, int tab[])
{
    int wynik=0;
    for(int i=0;i<n;i++) wynik+=(tab[i]*tab[i]);
    return wynik;
}

int main()
{
    int n=5;
    int tab[5] = {5, 3, 6, 8, 5};
    printf("Srednia arytmetyczna elementow = %.1f\n", srednia(n, tab));
    printf("Suma elementow = %i\n", suma(n, tab));
    printf("Suma kwadratow elementow = %i\n", sumakwadratu(n, tab));

    int tab2[5] = {7, 2, 8, 4, 4};
    printf("Srednia arytmetyczna elementow = %.1f\n", srednia(n, tab2));
    printf("Suma elementow = %i\n", suma(n, tab2));
    printf("Suma kwadratow elementow = %i\n", sumakwadratu(n, tab2));

    int tab3[5] = {7, 7, 8, 9, 2};
    printf("Srednia arytmetyczna elementow = %.1f\n", srednia(n, tab3));
    printf("Suma elementow = %i\n", suma(n, tab3));
    printf("Suma kwadratow elementow = %i\n", sumakwadratu(n, tab3));
    return 0;
}
