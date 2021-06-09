#include <stdio.h>
#include <stdlib.h>

void wyczysc(char *napis)
{
    napis[0]=0;
}

void wyczysc2(wchar_t *napis2)
{
    napis2[0]=0;
}

int main()
{
    char napis[] = "napis";
    printf("%s\n", napis);
    wyczysc(napis);
    printf("%i\n", *napis);

    wchar_t napis2[] = L"napis2";
    printf("%ls\n", napis2);
    wyczysc2(napis2);
    printf("%i", *napis2);

    return 0;
}
