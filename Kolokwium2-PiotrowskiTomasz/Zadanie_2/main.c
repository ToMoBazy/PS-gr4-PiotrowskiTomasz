#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 20

int dlugosc(const char nap[MAX_LEN])
{
    int x = 0;

    for(int i = 0; nap[i] != 0 && i < MAX_LEN; i++)
    {
        x++;
    }
    return x;
}

struct Produkt
{
    char nazwa[MAX_LEN];
    double cenaBrutto;
    float stawkaVat;
};

struct Produkt* makeProdukt(const char* nazwa, double cenaBrutto, float stawkaVat)
{
    struct Produkt* produkt = malloc(sizeof(struct Produkt));
    for(int i = 0; i < 20; i++) {
        produkt->nazwa[i] = nazwa[i];
    }
    produkt->cenaBrutto = cenaBrutto;
    produkt->stawkaVat = stawkaVat;
    return produkt;
}

struct Produkt* makeProdukt2(const struct Produkt* produkt)
{
    struct Produkt* a = malloc(sizeof(struct Produkt));
    for(int i=0; i<20; i++)
    {
        a->nazwa[i] = produkt-> nazwa[i];
    }
    a->cenaBrutto = produkt-> cenaBrutto;
    a->stawkaVat = produkt-> stawkaVat;
    return a;
};

double cenaNetto(const struct Produkt* produkt)
{
    double podatek = produkt-> cenaBrutto * produkt -> stawkaVat/100.0;
    return produkt -> cenaBrutto - podatek;
}

double kwotaVat(const struct Produkt* produkt)
{
    return (float)produkt->stawkaVat;
}

void show(const struct Produkt* produkt)
{
    for(int i = 0; i < dlugosc(produkt->nazwa); i++){

        printf("%c", produkt->nazwa[i]);
    }
    printf("\n");
    printf("%lf\n", produkt->cenaBrutto);
    printf("%f\n", produkt->stawkaVat);
}

int main()
{
    char nap[MAX_LEN];
    double cenaBrutto;
    float stawkVat;
    printf("Podaj nazwe produktu do dodania: ");
    scanf(" %s", nap);
    printf("Podaj cena brutto do dodania: ");
    scanf(" %lf", &cenaBrutto);
    if(cenaBrutto==0)
    {
        printf(" zla cena");
        return 0;
    }
    printf("Podaj stawkeVat do dodania: ");
    scanf(" %f", &stawkVat);
     if(stawkVat==0)
    {
        printf(" zly vat");
        return 0;
    }
    struct Produkt* produkt1 = makeProdukt(nap, cenaBrutto, stawkVat);
    struct Produkt* produkt2 = makeProdukt2(produkt1);
    printf("%lf\n", cenaNetto(produkt1));
    printf("%f\n", kwotaVat(produkt1));
    show(produkt1);
    free(produkt1);
    free(produkt2);
    return 0;
}
