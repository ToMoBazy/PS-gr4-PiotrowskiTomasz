#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int suma=1;

    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        suma=suma*i;
    }

    printf("%d", suma);


}
