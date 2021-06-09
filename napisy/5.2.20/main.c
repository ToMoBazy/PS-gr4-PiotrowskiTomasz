#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * godzina(int h, int m, int s)
{
    char * napis = malloc(9*sizeof(char));
    sprintf(napis, "%02d:%02d:%02d", h,m,s);
    return napis;
}

wchar_t * godzina2(int h, int m, int s)
{
    wchar_t * napis = malloc(9*sizeof(wchar_t));
    swprintf(napis, 9, L"%02d:%02d:%02d", h,m,s);
    return napis;
}

int main()
{
    printf("%s\n", godzina(15, 40, 20));
    printf("%ls", godzina2(15, 48, 20));
    return 0;
}
