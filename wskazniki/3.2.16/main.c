#include <stdio.h>
#include <stdlib.h>

void clone(int const *n, int * const m)
{
    *m=*n;
}

int main()
{
    const int n = 5;
    int m=0;
    printf("n=%i m=%i\n", n, m);
    clone(&n, &m);
    printf("n=%i m=%i Po przepisaniu\n", n, m);

    m=7;
    printf("n=%i m=%i\n", n, m);
    clone(&n, &m);
    printf("n=%i m=%i Po przepisaniu\n", n, m);
    m=12;
    printf("n=%i m=%i\n", n, m);
    clone(&n, &m);
    printf("n=%i m=%i Po przepisaniu\n", n, m);
    m=8;
    printf("n=%i m=%i\n", n, m);
    clone(&n, &m);
    printf("n=%i m=%i Po przepisaniu\n", n, m);
    return 0;
}
