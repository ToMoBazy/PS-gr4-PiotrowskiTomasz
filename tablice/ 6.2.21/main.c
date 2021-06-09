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

void reverse(int **wwsk, int n, int m)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m/2;j++)
        {
            temp = *(*(wwsk+i)+j);
            *(*(wwsk+i)+j) = *(*(wwsk+(n-i-1))+m-j-1);
            *(*(wwsk+(n-i-1))+m-j-1) = temp;
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
    drukuj(tab, 3, 4);
    reverse(tab, 3, 4);
    drukuj(tab, 3, 4);

    int **tab2 = alokuj(5,6);
    wypelnij(tab2, 5, 6);
    drukuj(tab2, 5, 6);
    reverse(tab2, 5, 6);
    drukuj(tab2, 5, 6);

    return 0;
}
