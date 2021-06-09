#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt
{
    double x,y,z;
};

double minvec(struct punkt tab[], int n)
{
    double temp, result = sqrt(pow(tab[1].x-tab[0].x,2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
    int i, j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++){
            temp = sqrt(pow(tab[j].x-tab[i].x,2)+pow(tab[j].y-tab[i].y,2)+pow(tab[j].z-tab[i].z,2));
            if(temp<result) result=temp;
        }
    return result;
}

int main()
{
    struct punkt tab[3] = {
        { 1.62534, 2.345, 3.25 },
        { 4.23456, 5.6453, 6.51 },
        { 7.5255, 8.25, 9.2501 }
    };
    int n=3;
    printf("%f", minvec(tab, n));
    return 0;
}
