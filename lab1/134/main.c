#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1;
    int liczba2;
    scanf("%d", &liczba1);
    scanf("%d", &liczba2);

    if(abs(liczba1)>abs(liczba2))
    {
        printf("%d", abs(liczba1));

    }
    else
    {
       printf("%d", abs(liczba2));
    }

    return 0;

}
