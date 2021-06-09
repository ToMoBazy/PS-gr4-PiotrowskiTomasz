#include <stdio.h>
#include <stdlib.h>


int *foo( int n)
{

return malloc(n*sizeof(double));

}

int main()
{

int x;
x = foo(5);

printf("%p", x);

}
