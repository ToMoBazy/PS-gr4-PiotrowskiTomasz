#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc > 2) {
        printf("Sposób u¿ycia: %s <nazwa-pliku>\n", argv[0]);
        return 1;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Pliku %s nie mo¿na otworzyæ.\n", argv[1]);
        return 2;
    }

    printf("Plik %s mo¿na otworzyæ.\n", argv[1]);
    fclose(fp);
    return 0;
}
