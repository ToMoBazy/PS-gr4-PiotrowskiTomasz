#include <stdio.h>
#include <stdlib.h>

int **alokuj(int n, int m)
{
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int*));
    }
    return tab;
}

double srednia(int ** wwsk, int n, int m)
{
    double srednia=0;
    for(int i=0;i<n;i++)
    {
        double suma=0;
        for(int j=0;j<m;j++)
        {
            suma += *(*(wwsk+i)+j) = i+j;
        }
        if(suma/m > srednia) srednia = suma/m;
    }
    return srednia;
}

void wypelnij(int ** wwsk, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            *(*(wwsk+i)+j) = i+j;
    }
}

void drukuj(int **tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d][%d] = %d, ", i, j, *(*(tab+i)+j));
            printf("%p\n", *(tab+i)+j);
        }
        printf("\n");
    }
}

int main()
{
    int **tab = alokuj(3,4);
    wypelnij(tab, 3, 4);
    printf("Najwieksza srednia wartosc w wierszach = %0.2f\n", srednia(tab, 3, 4));
    drukuj(tab, 3, 4);

    int **tab2 = alokuj(5,3);
    wypelnij(tab2, 5, 3);
    printf("Najwieksza srednia wartosc w wierszach = %0.2f\n", srednia(tab2, 5, 3));
    drukuj(tab2, 5, 3);
    return 0;
}
