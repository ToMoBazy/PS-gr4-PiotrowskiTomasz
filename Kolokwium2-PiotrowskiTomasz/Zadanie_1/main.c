#include <stdio.h>
#include <ctype.h>
#include <time.h>


void odwroc(short tab[], int lewy, int prawy)
{
    int x = 0;
    int obroc = prawy - lewy;
    int obroc1 = obroc / 2;
    if(obroc1%2!=0)
        obroc1+=1;
    if(obroc1==0)
        obroc1+=1;
    int a = 0;
    for (int i = 0; i < prawy; i++)
    {
        if (i >= lewy-1 && i < prawy && a < obroc1)
        {
            a++;
            int a = *(tab + i);
            int b = *(tab + lewy + obroc - x - 1);
            *(tab + i) = b;
            *(tab + lewy + obroc - x - 1) = a;
            x++;
        }
    }
}

int main()
{
    srand(NULL);
    int N = 500;
    int a = 0;
    int lewy = 0;
    int prawy = 0;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &a);
    if(a <= 0 || a> N)
    {
        printf("Liczba elementow musi byc z przedzialu [1, %d]!\n", N);
        return 0;
    }

    printf("Lewy: ");
    scanf("%d", &lewy);
    printf("Prawy: ");
    scanf("%d", &prawy);
    short tab[a];
    for (int i = 0; i < a; i++)
    {
        tab[i] = rand()%(300+1)-200;
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    printf("\n");
    odwroc(tab, lewy, prawy);
    for (int i = 0; i < a; i++)
    {
        printf("%d ", tab[i]);
    }
    return 0;
}
