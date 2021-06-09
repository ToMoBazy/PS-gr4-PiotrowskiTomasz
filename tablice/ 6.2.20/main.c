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

void zamien(int **tab1, int **tab2, int n, int m)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp = *(*(tab1+i)+j);
            *(*(tab1+i)+j) = *(*(tab2+i)+j);
            *(*(tab2+i)+j) = temp;
        }
    }
}

void wypelnij(int ** wwsk, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            *(*(wwsk+i)+j) = i+j;
    }
}

void zeruj(int ** wwsk, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            *(*(wwsk+i)+j) = 0;
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
    int **tab_0 = alokuj(3,4);
    wypelnij(tab_0, 3, 4);
    drukuj(tab_0, 3, 4);

    int **tab_1 = alokuj(3,4);
    zeruj(tab_1, 3, 4);
    drukuj(tab_1, 3, 4);

    zamien(tab_0, tab_1, 3, 4);
    printf("Po zamianie.\n");
    drukuj(tab_0, 3, 4);
    drukuj(tab_1, 3, 4);

    return 0;
}
