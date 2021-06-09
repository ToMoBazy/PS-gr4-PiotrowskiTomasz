#include <stdio.h>
#include <stdlib.h>

void przepisz(char *napis1, char *napis2)
{
    int counter=0;
    while(napis1[counter]!=0)
        counter++;
    for(int i=0;i<counter;i++) napis2[i]=napis1[i];
    napis2[counter]=0;
}

void przepisz2(wchar_t *napis1, wchar_t *napis2)
{
    int counter=0;
    while(napis1[counter]!=0)
        counter++;
    for(int i=0;i<counter;i++) napis2[i]=napis1[i];
    napis2[counter]=0;
}

int main()
{
    char napis1[] = "napis";
    char napis2[] = "test";
    printf("%s\n", napis2);
    przepisz(napis1, napis2);
    printf("%s\n", napis2);
    wchar_t napis3[] = L"Dom";
    wchar_t napis4[] = L"Kot";
    printf("%ls\n", napis4);
    przepisz2(napis3, napis4);
    printf("%ls", napis4);
    return 0;
}
