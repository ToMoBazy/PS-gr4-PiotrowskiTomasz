#include <stdio.h>
#include <stdlib.h>

void copy(int n, int tab1[], int tab2[])
{
    for(int i=0;i<n;i++) tab2[i]=tab1[i];
}

void reverse(int n, int tab1[], int tab2[])
{
    for(int i=0;i<n;i++) tab2[n-1-i]=tab1[i];
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
    int n=5;
    int tab1[n], tab2[n];
    printf("Test case 1:\n");
    uzupelnij(5, n, tab1);
    uzupelnij(4, n, tab2);
    //printf("Tab1\n");
    //wypisz(n, tab1);
    //printf("Tab2\n");
    //wypisz(n, tab2);
    copy(n, tab1, tab2);
    //wypisz(n, tab1);
    wypisz(n, tab2);
    reverse(n, tab1, tab2);
    wypisz(n, tab2);

    printf("Test case 2:\n");
    uzupelnij(3, n, tab1);
    uzupelnij(6, n, tab2);
    //printf("Tab1\n");
    //wypisz(n, tab1);
    //printf("Tab2\n");
    //wypisz(n, tab2);
    copy(n, tab1, tab2);
    //wypisz(n, tab1);
    wypisz(n, tab2);
    reverse(n, tab1, tab2);
    wypisz(n, tab2);

    printf("Test case 3:\n");
    uzupelnij(2, n, tab1);
    uzupelnij(0, n, tab2);
    //printf("Tab1\n");
    //wypisz(n, tab1);
    //printf("Tab2\n");
    //wypisz(n, tab2);
    copy(n, tab1, tab2);
    //wypisz(n, tab1);
    wypisz(n, tab2);
    reverse(n, tab1, tab2);
    wypisz(n, tab2);
    return 0;
}
