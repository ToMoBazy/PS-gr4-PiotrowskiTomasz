#include <stdio.h>
#include <stdlib.h>

struct punkt10 {
    double tab[10];
};

void przepisz(struct punkt10* tab1, struct punkt10* tab2, int n)
{
    for (int i=0;i<n;i++) tab2->tab[i] = tab1->tab[i];
};

void wypisz(struct punkt10* tab, int n)
{
    for (int i=0;i<n;i++) printf("%f\n", tab->tab[i]);
}

void wpisz(struct punkt10* tab, int n)
{
    for(int i=0;i<10;i++) tab->tab[i] = i*n;
}

int main()
{
    struct punkt10* tab1 = malloc(sizeof(struct punkt10));
    wpisz(tab1, 1);
    struct punkt10* tab2 = malloc(sizeof(struct punkt10));
    wpisz(tab2, 2);

    wypisz(tab2, 10);
    printf("\n");
    przepisz(tab1, tab2, 10);
    wypisz(tab2, 10);
    return 0;
}
