#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Podaj n: ");
    scanf("%d", &n);

    int dodatnie=0, ujemne=0, zera=0;

    for (int i = 0; i < n; i++)
    {
        int zmienna;
        scanf("%d", &zmienna);
        if (zmienna > 0)
            dodatnie++;
        else if (zmienna == 0)
            zera++;
        else
            ujemne++;
    }

    printf("\nTyle jest dodatnich: %d\n", dodatnie);
    printf("Tyle jest ujemne: %d\n", ujemne);
    printf("Tyle jest zer: %d\n", zera);

}
