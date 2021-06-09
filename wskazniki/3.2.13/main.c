#include <stdio.h>
#include <stdlib.h>

double convert(int n)
{
    return (double)(n);
}

double converter(double (*convert)(int arg), int n)
{
    return convert(n);
}

int main()
{
    int n=5;
    printf("%f\n", converter(convert,n));

    n = 6;
    printf("%f\n", converter(convert,n));

    n = 0;
    printf("%f\n", converter(convert,n));

    n = 22;
    printf("%f\n", converter(convert,n));
    return 0;
}
