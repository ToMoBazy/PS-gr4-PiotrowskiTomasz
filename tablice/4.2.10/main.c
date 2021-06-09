#include <stdio.h>
#include <stdlib.h>

int maks(int n, int *tab)
{
    int wynik = *tab;
    for(int i=1;i<n;i++) if(*(tab+i)>wynik) wynik = *(tab+i);
    return wynik;
}

int min(int n, int *tab)
{
    int wynik = *tab;
    for(int i=1;i<n;i++) if(*(tab+i)<wynik) wynik = *(tab+i);
    return wynik;
}

int maksindex(int n, int *tab)
{
    int wynik = *tab;
    for(int i=1;i<n;i++) if(*(tab+i)<wynik) wynik = i-1;
    return wynik;
}

int minindex(int n, int *tab)
{
    int wynik = *tab;
    for(int i=1;i<n;i++) if(*(tab+i)>wynik) wynik = i-1;
    return wynik;
}

int main()
{
    int n=5;
    int tab[5] = {5, 0, -7, 4, 2};
    printf("Maks wartosc=%i\n", maks(n, &tab));
    printf("Min wartosc=%i\n", min(n, &tab));
    printf("Index wartosci maks=%i\n", maksindex(n, &tab));
    printf("Index wartosci min=%i\n", minindex(n, &tab));
    return 0;
}
