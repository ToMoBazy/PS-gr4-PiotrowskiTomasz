#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
const int N = 1000;

int n,losowe;

scanf("%d", &n);

int tab[n];
if((n>N)||(n<0))
{
    printf("Zla liczba");
    exit(0);
}



for(int i=0; i<n; i++)
{
    losowe = rand() % 100+1;
    tab[i] = losowe;

    if(tab[i]%2==1)
    {
        tab[i]=tab[i]*3+1;
    }
    else
    {


  do
  {
      tab[i]=tab[i]/2;

  }while(tab[i]%2==0);



    }


}

for(int i=0; i<n; i++  )
{
    printf("%d ", tab[i] );
}


}
