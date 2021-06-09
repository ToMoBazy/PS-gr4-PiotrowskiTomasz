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

void append(struct element ** Lista, int a)
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

struct element * stworz()
{
    return NULL;
}

struct element * dodajw(struct element * Lista, struct element * elem, int a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    if(elem==NULL){
        wsk->next=Lista;
        Lista=wsk;
    }
    else{
        wsk->next=elem->next;
        elem->next=wsk;
    }
    return Lista;
};

struct element * znajdz(struct element * Lista, int a)
{
    while((Lista!=NULL)&&(Lista->i!=a)) Lista=Lista->next;
    return Lista;
};

int main()
{
    struct element * Lista1 = stworz();
    for(int i=0;i<11;i++) append(&Lista1, i);
    wyswietlListeBezGlowy(Lista1);
    Lista1=dodajw(Lista1, znajdz(Lista1, 4), 7);
    wyswietlListeBezGlowy(Lista1);
    Lista1=dodajw(Lista1, znajdz(Lista1, 52), 66);
    wyswietlListeBezGlowy(Lista1);
    return 0;
}
