#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, ilerazy;

    printf("Ile liczb chcesz podac: ");

    scanf("%d", &ilerazy);

    for(int i=0; i<ilerazy; i++)
    {
        printf("Podaj liczbe: \n");
        scanf("%d", &liczba);
        printf("Wypisz liczbe: ");
        printf("%d\n", liczba);

    }



}
