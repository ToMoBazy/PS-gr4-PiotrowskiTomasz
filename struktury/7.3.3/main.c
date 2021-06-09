#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

void wyswietlListeBezGlowy(struct element*Lista)
{
    if (Lista == NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(Lista!=NULL)
    {
        printf("%d\n",Lista->i);
        Lista=Lista->next;
    }
    printf("---\n");
}

struct element * stworz()
{
    return NULL;
}

struct element * insert_first(struct element ** Lista, int a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=*Lista;
    return wsk;
}

int main()
{
    struct element * Lista1 = stworz();
    wyswietlListeBezGlowy(Lista1);
    for(int i=0;i<11;i++) Lista1=insert_first(&Lista1, i);
    wyswietlListeBezGlowy(Lista1);
    return 0;
}
