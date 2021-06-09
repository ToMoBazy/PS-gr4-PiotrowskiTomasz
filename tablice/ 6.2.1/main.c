#include <stdio.h>
#include <stdlib.h>

int **alokuj(int n, int m)
{
    int **wwsk = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++) *(wwsk+i) = malloc(m*sizeof(int));
    return wwsk;
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

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(int*));


    **tab=1;
    *(*tab+1)=2;
    *(*tab+2)=3;
    *(*tab+3)=4;

    *(*(tab+1))=5;
    *(*(tab+1)+1)=6;
    *(*(tab+1)+2)=7;
    *(*(tab+1)+3)=8;

    *(*(tab+2))=9;
    *(*(tab+2)+1)=10;
    *(*(tab+2)+2)=11;
    *(*(tab+2)+3)=12;

    drukuj(tab, 3, 4);
    return 0;
}
