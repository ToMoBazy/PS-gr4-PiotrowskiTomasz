#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

int foo(struct element* tab)
{
    int wynik = 0;
    while (tab != NULL)
    {
        wynik++;
        tab = tab->next;
    }
    return wynik;
}

struct element* dodajnakoniec(struct element* Lista, int a) {
    struct element* wsk;
    if (Lista == NULL)
    {
        Lista = wsk = malloc(sizeof(struct element));
    }
    else
    {
        wsk = Lista;
        while (wsk->next != NULL)
        {
            wsk = wsk->next;
        }
        wsk->next = malloc(sizeof(struct element));
        wsk = wsk->next;
    }
    wsk->x = a;
    wsk->next = NULL;
    return Lista;
}

int main()
{
    struct element* first = NULL;

    for (int i = 0; i < 3; i++)
    {
        first = dodajnakoniec(first, i);
    }
    printf("%d", foo(first));

    return 0;
}
