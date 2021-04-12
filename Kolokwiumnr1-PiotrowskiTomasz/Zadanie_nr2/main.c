#include <stdio.h>
#include <stdlib.h>
float funkcja(int n, int m)
{
    float zm=1;
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
    for(int i=0; i<m*(-1); i++)
   {
       zm=n*zm;
   }



   return 1/zm;

   }






   return zm;



}
int main()
{
    float pom;

    pom=funkcja(n,m);

    printf("%f", pom);

}
