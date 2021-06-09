#include <stdio.h>
#include <stdlib.h>

void clone(int const *n, int *m)
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

    m=8;
    printf("n=%i m=%i\n", n, m);
    clone(&n, &m);
    printf("n=%i m=%i Po przepisaniu\n", n, m);

    m=9;
    printf("n=%i m=%i\n", n, m);
    clone(&n, &m);
    printf("n=%i m=%i Po przepisaniu\n", n, m);

    m=2;
    printf("n=%i m=%i\n", n, m);
    clone(&n, &m);
    printf("n=%i m=%i Po przepisaniu\n", n, m);
    return 0;
}
