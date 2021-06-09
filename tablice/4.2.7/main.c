#include <stdio.h>
#include <stdlib.h>

void suma(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++) tab3[i] = tab1[i]+tab2[i];
}

void wiekszy(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++) tab3[i] = tab1[i]>tab2[i] ? tab1[i]:tab2[i];
}

void swap(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        int temp = tab2[i];
        tab2[i] = tab1[i];
        tab1[i] = tab3[i];
        tab3[i] = temp;
    }
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
    int tab1[n],tab2[n],tab3[n];
    printf("Test case 1:\n");
    uzupelnij(2, n, tab1);
    uzupelnij(3, n, tab2);
    wypisz(n, tab1);
    wypisz(n, tab2);
    printf("Suma\n");
    suma(n, tab1, tab2, tab3);
    wypisz(n, tab3);
    printf("Wiekszy\n");
    wiekszy(n, tab1, tab2, tab3);
    wypisz(n, tab3);
    printf("Przed swapem\n");
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    printf("Swap\n");
    swap(n, tab1, tab2, tab3);
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);

    printf("Test case 2:\n");
    uzupelnij(5, n, tab1);
    uzupelnij(2, n, tab2);
    wypisz(n, tab1);
    wypisz(n, tab2);
    printf("Suma\n");
    suma(n, tab1, tab2, tab3);
    wypisz(n, tab3);
    printf("Wiekszy\n");
    wiekszy(n, tab1, tab2, tab3);
    wypisz(n, tab3);
    printf("Przed swapem\n");
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    printf("Swap\n");
    swap(n, tab1, tab2, tab3);
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);

    printf("Test case 3:\n");
    uzupelnij(6, n, tab1);
    uzupelnij(6, n, tab2);
    wypisz(n, tab1);
    wypisz(n, tab2);
    printf("Suma\n");
    suma(n, tab1, tab2, tab3);
    wypisz(n, tab3);
    printf("Wiekszy\n");
    wiekszy(n, tab1, tab2, tab3);
    wypisz(n, tab3);
    printf("Przed swapem\n");
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    printf("Swap\n");
    swap(n, tab1, tab2, tab3);
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    return 0;
}
