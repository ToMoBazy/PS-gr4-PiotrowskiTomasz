#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void generuj(int tab[], int n)
{

    srand(time(NULL));
    for( int i=0; i<n; i++)
    {
        tab[i]= rand()% 100+1;
    }



}


void wypisz(int tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", tab[i]);
    }

    printf("\n\n");
}


void collatz(int tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i]%2==1)
        {
            tab[i]=3*tab[i]+1;
        }
        else if(tab[i]%2==0)
        {

            do
            {

                tab[i]=tab[i]/2;

            }while(tab[i]%2==0);
        }
    }
}



void zmien(int tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i]%2==1)
        {
            tab[i]=tab[i]*2;
        }
        else if(tab[i]%2==0)
        {
            tab[i]=tab[i]*(-1);
        }
    }
}


void signum(int tab[], int n)
{

    for(int i=0; i<n; i++)
    {
        if(tab[i]>0)
        {

            tab[i]=1;
        }
        else{
            tab[i]=-1;
        }
    }
}


void odwroc(int tab[], int lewy, int prawy, int n)
{int x;
    for(int i=prawy; i<n; i--)
    {
        x=lewy++;
    tab[i]=tab[x];
    }
}


int nieparzyste(int tab[], int n)
{
    int x=0;

    for(int i=0; i<n; i++)
    {
        if(tab[i]%2==1)
        {
            x++;
        }
    }

    return x;
}

int main()
{

const int N=1000;
int n,x;

scanf("%d", &n);
int tab[n];
if((n>1000)||(n<0))
{
    printf("zla wartosc");
}


generuj(tab, n);
wypisz(tab, n);
 x=nieparzyste(tab,n);
printf("%d", x);


collatz(tab, n);
wypisz(tab, n);

zmien(tab, n);
wypisz(tab, n);

signum(tab, n);
wypisz(tab, n);

 odwroc(tab, 2 , 5, 4);
 wypisz(tab, n);

}
