#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m;
   int suma=0;
   scanf("%d", &n);
   scanf("%d", &m);

   if(m<0)
   {

       printf("z³a liczba");
   }

   for(int i=m; i>0; i--)
   {
       suma=suma+n;
       printf("%d ", suma);

   }
}
