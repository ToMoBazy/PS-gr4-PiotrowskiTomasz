#include <stdio.h>
#include <stdlib.h>

struct element
{
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

struct element * usunw(struct element * Lista, struct element * elem)
{
    struct element *wsk, *wsk2;
    if(Lista==NULL)
        return Lista;
    wsk=Lista;
    if(Lista==elem)
    {
        Lista=Lista->next;
        free(wsk);
        return Lista;
    }
    while((wsk->next!=NULL)&&(wsk->next!=elem))
        wsk=wsk->next;
    if(wsk->next!=NULL)
    {
        wsk2=wsk->next;
        wsk->next=wsk2->next;
        free(wsk2);
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
    wyswietlListeBezGlowy(Lista1);
    for(int i=0;i<10;i++) append(&Lista1, i);
    wyswietlListeBezGlowy(Lista1);
    Lista1=usunw(Lista1, znajdz(Lista1, 4));
    wyswietlListeBezGlowy(Lista1);
    return 0;
}
