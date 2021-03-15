#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m,k;
   printf("Podaj n: ");
   scanf("%d", &n);
   printf("Podaj k: ");
   scanf("%d", &k);
   printf("Podaj m: ");
   scanf("%d", &m);

   if((m<0)||(k<0)||(n<0))
   {

       printf("zla liczba");
   }


   for(int i=n; i<=k; i=i+n)
   {

       if((i>m)&&(i<k))
       {



       printf("%d ", i);
       }

   }
}
