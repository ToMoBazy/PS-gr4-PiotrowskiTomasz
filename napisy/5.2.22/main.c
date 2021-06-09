#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sklej(char *napis1, char *napis2, char *napis3)
{
    char * napis = malloc((strlen(napis1)+strlen(napis2)+strlen(napis3)+1)*sizeof(char));
    strcpy(napis, napis1);
    strcat(napis, napis2);
    strcat(napis, napis3);
    return napis;
}

wchar_t *sklej2(wchar_t *napis1, wchar_t *napis2, wchar_t *napis3)
{
    wchar_t * napis = malloc((wcslen(napis1)+wcslen(napis2)+wcslen(napis3)+1)*sizeof(wchar_t));
    wcscpy(napis, napis1);
    wcscat(napis, napis2);
    wcscat(napis, napis3);
    return napis;
}

int main()
{
    printf("%s\n", sklej("Ala", " ma", " kota"));
    wprintf(L"%s", sklej2("Ala", " ma", " kota"));
    return 0;
}
