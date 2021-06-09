#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

int dlugosc2(wchar_t *napis)
{
    int i=0;
    while(napis[i]!=0)
        i++;
    return i;
}

int main()
{
    char napis[] = "napis";
    printf("%i\n", dlugosc(&napis));

    wchar_t napis2[] = L"napis2";
    printf("%i\n", dlugosc2(&napis2));

    return 0;
}
