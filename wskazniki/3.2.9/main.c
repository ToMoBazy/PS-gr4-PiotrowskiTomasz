#include <stdio.h>
#include <stdlib.h>

int *func()
{
    return malloc(sizeof(int));
}


int main()
{
    printf("%i",func());
    return 0;
}
