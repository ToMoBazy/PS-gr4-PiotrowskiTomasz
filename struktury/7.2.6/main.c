#include <stdio.h>
#include <stdlib.h>

struct punktn{
    double *tab;
    int n;
};

void przepisz(struct punktn *tab1, struct punktn *tab2, int n)
{
    for(int i=0;i<n;i++)
    {

    }
}

int main()
{
    struct punkt tab1[]={{3,3,3},{2,1,-10},{7,2,3.4},{3,3,4}};
    struct punkt tab2[]={{3,8,3},{2,1,9},{7,1,3.4},{2,3,4}};

    drukuj(tab2, 4);
    printf("-----------\n");

    przepisz(tab1,tab2,4);

    drukuj(tab2, 4);

    return 0;
}
