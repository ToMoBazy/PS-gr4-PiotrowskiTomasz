#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    double x,y,z;
};

void przepisz(struct punkt tab1[], struct punkt tab2[], int n)
{
    for(int i=0;i<n;i++) tab2[i]=tab1[i];
}

int main()
{
    struct punkt tab1[3] = {
        { 1.62534, 2.345, 3.25 },
        { 4.23456, 5.6453, 6.51 },
        { 7.5255, 8.25, 9.2501 }},
        tab2[3] = {
        { 6.632534, 1.32355, 7.22 },
        { 1.223556, 2.6351253, 7.22 },
        { 6.5255, 2.25, 7.251231 }
    };
    int n=3;
    for(int i=0;i<n;i++)
    {
        printf("%f ", tab2[i].x);
        printf("%f ", tab2[i].y);
        printf("%f \n", tab2[i].z);
    }
    przepisz(tab1, tab2, n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%f ", tab2[i].x);
        printf("%f ", tab2[i].y);
        printf("%f \n", tab2[i].z);
    }
    return 0;
}
