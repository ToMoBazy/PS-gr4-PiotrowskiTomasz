#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,pom;
    scanf("%d", &n);
    scanf("%d", &m);

    pom=n;
    while(pom<=m)
    {

    pom=n+pom;


       printf("%d", pom);
    }
}
