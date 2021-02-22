#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[9];
    int suma=1;


    for(int i=0; i<10; i++)
    {

        tab[i]=i+1;
        suma=suma*tab[i];
    }

    printf("%d", suma);
}
