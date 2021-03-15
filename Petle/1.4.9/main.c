#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("Podaj m: ");
    scanf("%d", &m);

    for( int i=1; i<=n; i++)
    {

        if((n % i == 0)&&(m % i == 0))
        {

            printf("%d ", i);
        }
    }

}
