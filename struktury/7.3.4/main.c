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

void dodajk(struct element ** Lista, int a)
{
    struct element * wsk ;
    if(*Lista==NULL)
    {
        *Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=*Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
};

int main()
{
    struct element * Lista1 = stworz();
    wyswietlListeBezGlowy(Lista1);
    for(int i=0;i<11;i++) dodajk(&Lista1, i);
    wyswietlListeBezGlowy(Lista1);
    return 0;
}
