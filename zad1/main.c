#include <stdio.h>
#include <stdlib.h>
int wypiszsume(int styczen, int luty, int marzec)
{

    int suma=0;
    suma=styczen+luty+marzec;

    return suma;
}
int main()
{
    int zm=wypiszsume(31,29,31);

    printf("%d", zm);
}
