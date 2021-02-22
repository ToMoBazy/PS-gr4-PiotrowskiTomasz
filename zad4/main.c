#include <stdio.h>
#include <stdlib.h>

int main()
{
    float suma=0;
    float licz=0;
    float procent=0.06;
    float saldostart=1000;
    licz=saldostart*procent;
    suma=saldostart+licz;
    saldostart=suma;
    printf("po pierwszym roku: %f\n",saldostart);


    licz=saldostart*procent;
    suma=saldostart+licz;
    saldostart=suma;
    printf("po drugim roku: %f\n",saldostart);


    licz=saldostart*procent;
    suma=saldostart+licz;
    saldostart=suma;
    printf("po trzecim roku: %f",saldostart);


}
