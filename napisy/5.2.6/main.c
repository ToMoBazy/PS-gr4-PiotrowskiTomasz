#include <stdio.h>
#include <stdlib.h>
int dlugosc(char *nap1)
{
    int i = 0;
    while(nap1[i] != 0)
    {
        i++;
    }
    return i;
}

void kopiujn(char* nap1, char* nap2, int n)
{

    for (int i = 0; i < n && i < dlugosc(nap1); i++)
    {
        *(nap2 + i) = *(nap1 + i);
    }
    nap2[dlugosc(nap2)] = 0;
    for(int i =0; i< dlugosc(nap2); i++)
    {
        printf("%c", nap2[i]);
    }
}


int main()
{
    char nap1[4] = "aaa";
    char nap2[5] = "bbba";
    kopiujn(&nap1, &nap2, 10);
    return 0;
}
