#include <stdio.h>
#include <stdlib.h>

int *func(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    printf("%p\n", func(4));
    printf("%p\n", func(2));
    printf("%p\n", func(8));
    printf("%p", func(12));
    return 0;
}
