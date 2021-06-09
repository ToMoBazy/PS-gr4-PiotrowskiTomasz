#include <stdio.h>
#include <stdlib.h>

void funcA(unsigned int n, int tab[])
{
    for(int i=0;i<n;i++) tab[i]=0;
}

void funcB(unsigned int n, int tab[])
{
    for(int i=0;i<n;i++) tab[i]=i;
}

void funcC(unsigned int n, int tab[])
{
    for(int i=0;i<n;i++) tab[i]=2*i;
}

void funcD(unsigned int n, int tab[])
{
    for(int i=0;i<n;i++) if(tab[i]<0) tab[i] = -1*tab[i];
}

int main()
{
    int n=5;
    int tab[n];
    for(int i;i<n;i++) printf("tab[%i] = %i\n", i, tab[i]);
    printf("\n");
    funcA(n, tab);
    for(int i;i<n;i++) printf("tab[%i] = %i\n", i, tab[i]);
    printf("\n");
    funcB(n, tab);
    for(int i;i<n;i++) printf("tab[%i] = %i\n", i, tab[i]);
    printf("\n");
    funcC(n, tab);
    for(int i;i<n;i++) printf("tab[%i] = %i\n", i, tab[i]);
    printf("\n");
    tab[3] = -6;
    funcD(n, tab);
    for(int i;i<n;i++) printf("tab[%i] = %i\n", i, tab[i]);
    return 0;
}
