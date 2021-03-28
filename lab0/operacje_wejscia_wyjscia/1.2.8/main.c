#include <stdio.h>
#include <stdlib.h>

int main()
{float liczba1,liczba2,liczba3;
float srednia;
printf("Podaj liczbe: ");
scanf("%f", &liczba1);
printf("Podaj liczbe: ");
scanf("%f", &liczba2);
printf("Podaj liczbe: ");
scanf("%f", &liczba3);

srednia=(liczba1+liczba2+liczba3)/3;

printf("Srednia:  ");
printf("%f", srednia);


    return 0;
}
