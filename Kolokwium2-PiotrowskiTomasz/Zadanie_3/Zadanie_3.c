#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void foo(char* nap)
{
    int dlugosc = 0;
    while(*(nap+dlugosc) != 0){

        dlugosc++;
    }

    for(int i=0; i<dlugosc; i++){

        if(!isupper(*(nap+i)))
            *(nap+i)=toupper(*(nap+i));
    }
}

int main()
{
    char nap_1[500];

    printf("Podaj tekst: ");
    fgets(nap_1,500,stdin);

    foo(nap_1);
    printf("%s\n", nap_1);

    return 0;
}
