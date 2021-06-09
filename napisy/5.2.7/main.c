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

void sklej(char *napis1, char *napis2, char *napis3)
{
    int i=0;
    for(i;i<dlugosc(napis1);i++) napis3[i]=napis1[i];
    for(i;i<(dlugosc(napis1)+dlugosc(napis2));i++) napis3[i]=napis2[i-dlugosc(napis1)];
    napis3[i]=0;
}

void sklej2(wchar_t *napis1, wchar_t *napis2, wchar_t *napis3)
{
    int i=0;
    for(i;i<dlugosc2(napis1);i++) napis3[i]=napis1[i];
    for(i;i<(dlugosc2(napis1)+dlugosc2(napis2));i++) napis3[i]=napis2[i-dlugosc2(napis1)];
    napis3[i]=0;
}

int main()
{
    char *napis1 = "Ala m";
    char *napis2 = "a kota";
    char napis3[] = "losowy napis";

    printf("%s\n", napis3);
    sklej(napis1, napis2, napis3);
    printf("%s\n", napis3);

    wchar_t *napis4 = L"Ala m";
    wchar_t *napis5 = L"a kota";
    wchar_t napis6[] = L"losowy napis";

    printf("%ls\n", napis6);
    sklej2(napis4, napis5, napis6);
    printf("%ls", napis6);
    return 0;
}
