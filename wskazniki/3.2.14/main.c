#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
    return n*n;
}
int func2(int n)
{
    return n+n;
}

int if_equal(int (*func)(int n), int (*func2)(int n), int n)
{
    if (func(n)==func2(n)) return 1;
    return 0;
}

int main()
{
    int n=2;
    //printf("%i\n", if_equal(func, func2, n));
    if(if_equal(func, func2, n) == 1) printf("True\n");
    else printf("False\n");

    n=4;
    //printf("%i\n", if_equal(func, func2, n));
    if(if_equal(func, func2, n) == 1) printf("True\n");
    else printf("False\n");

    n=5;
    //printf("%i\n", if_equal(func, func2, n));
    if(if_equal(func, func2, n) == 1) printf("True\n");
    else printf("False\n");

    n=1;
    //printf("%i\n", if_equal(func, func2, n));
    if(if_equal(func, func2, n) == 1) printf("True\n");
    else printf("False\n");
    return 0;
}
