#include <stdio.h>
#include <stdlib.h>

void add(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<2*n;i++) tab3[i]= i<n ? tab1[i]:tab2[i-n];
}

void uzupelnij(int m, int n, int tab[])
{
    for(int i=0;i<n;i++) tab[i]=m*(i+1);
}
void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++) printf("%i\n", tab[i]);
    printf("\n");
}
int main()
{
    int n=3;
    int tab1[n],tab2[n],tab3[2*n];
    uzupelnij(4, n, tab1);
    uzupelnij(2, n, tab2);
    wypisz(n, tab1);
    wypisz(n, tab2);
    add(n, tab1, tab2, tab3);
    wypisz(2*n, tab3);
    return 0;
}
