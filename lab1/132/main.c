#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1;
    int liczba2;
    scanf("%d",&liczba1);
    scanf("%d", &liczba2);

    if(liczba1>liczba2)
    {
        printf("%d", liczba1);

    }
    else
    {
        printf("%d", liczba2);
    }
    return 0;
}
