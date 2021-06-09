#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float bok1, bok2, bok3, podstawa, wysokosc, obwod, pole, x;


    printf("1-Pole trojkata z wysokoscia i podstawa\n");
    printf("2-Pole trojkata z 3 bokow\n");
    printf("Wybierz metode: ");
    scanf("%f", &x);

    if((x != 2)&&(x != 1))
    {
        printf("Nie ma takiej metody");
    }

    if(x == 1)
    {
        printf("Podstawa: ");
        scanf("%f", &podstawa);

        printf("Wysokosc: ");
        scanf("%f", &wysokosc);

        pole=(podstawa*wysokosc)/2;

        printf("Pole: ");


        printf("%f", pole);


    }
    else if (x == 2)
    {
        printf("Bok1: ");
        scanf("%f", &bok1);

        printf("Bok2: ");
        scanf("%f", &bok2);

        printf("Bok3: ");
        scanf("%f", &bok3);

        obwod = (bok1 + bok2 + bok3)/2;
        pole = sqrt(obwod*(obwod-bok1)*(obwod-bok2)*(obwod-bok3));
        printf("Pole: ");
        printf("%f", pole);


    }






}
