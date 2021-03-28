#include <stdio.h>
#include <stdlib.h>



int funkcja(int n)
{
 printf("Podaj n: ");
   scanf("%d", &n);
   int iloraz=1;

for(int i=0; i<n; i++)
{
    iloraz=iloraz*2;
}


 return iloraz;
}


int main()
{
    int n;
int zm = funkcja(n);

printf("%d", zm);
}
