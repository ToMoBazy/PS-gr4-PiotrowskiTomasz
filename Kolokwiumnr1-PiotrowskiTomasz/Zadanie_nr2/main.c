#include <stdio.h>
#include <stdlib.h>
int funkcja(int n, int m)
{
    int zm=1;
   for(int i=0; i<m; i++)
   {
       zm=n*zm;
   }

   if(m==0)
   {
       return 1;
   }

   if(n==0)
   {
       return 0;
   }

   if(m<0)
   {
    for(int i=0; i<m; i++)
   {
       zm=n*zm;
   }

   return 1/zm;

   }


   return zm;



}
int main()
{
    int pom;

    pom=funkcja(1,-5);

    printf("%d", pom);

}
