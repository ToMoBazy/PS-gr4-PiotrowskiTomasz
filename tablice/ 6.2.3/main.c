#include <stdio.h>
#include <stdlib.h>


int **alokuj(int n, int m) //to jest funkcja z zadania 6_2_1
{
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int*));
    }
    return tab;
}

void zwolnij(int ** wwsk, int n, int m)
{
    for(int i=0; i<n;i++)
    {
        free(*(wwsk+i));
    }
    free(wwsk);
}

int main()
{
    int **tab=alokuj(5,6);
    zwolnij(tab, 5, 6);
    return 0;
}
