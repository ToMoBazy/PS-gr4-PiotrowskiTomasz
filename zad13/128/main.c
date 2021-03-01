#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1;
    int liczba2;
    int liczba3;
    float srednia;
    int dzielnik=3;
    int suma;
    scanf("%d", &liczba1);
    scanf("%d", &liczba2);
    scanf("%d", &liczba3);
    suma=liczba1+liczba2+liczba3;
    srednia=suma/dzielnik;
    printf("%f", srednia);

    return 0;
}
