#include <stdio.h>
#include <stdlib.h>

int main()
{
   int suma=0;
   int iloczyn=1;
   int n;
   scanf("%d", &n);
   if(n<0)
   {
       printf("zla liczba");
       exit(0);

   }
   for(int i=0;i<=n; i++)
   {
       iloczyn=i*i;
       suma=suma+iloczyn;

   }

   printf("%d", suma);
}
