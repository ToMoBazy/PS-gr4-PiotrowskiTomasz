#include <stdio.h>
#include <stdlib.h>

struct zespolone
{
    double re, im;
};

typedef struct zespolone zesp;

zesp suma(zesp z1, zesp z2)
{
    zesp temp = {z1.re + z2.re, z1.im + z2.im};
    return temp;
}

int main()
{
    zesp z1 = {5, 30};
    zesp z2 = {10, 30};
    zesp result;
    result = suma(z1, z2);
    printf("Suma:%f + %f\n", result.re, result.im);
    return 0;
}
