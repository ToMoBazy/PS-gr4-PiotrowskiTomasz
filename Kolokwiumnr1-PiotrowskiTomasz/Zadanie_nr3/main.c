#include <stdio.h>
#include <stdlib.h>

int pierwsza_cyfra(int n)
{
    int mod;

    while(n > 0)
    {
        mod = n % 10;
        n /=  10;
    }

    return mod;
}

int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

       if(n<0)
    {
        printf("zla liczba");
        exit(0);
    }

    printf("pierwsza cyfra: ");
    printf("%d\n", pierwsza_cyfra(n));





    return 0;
}
