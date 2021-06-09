#include <stdio.h>
#include <stdlib.h>

int *func()
{
    return malloc(sizeof(double));
}

int main()
{
    printf("%i",func());
    return 0;
}
