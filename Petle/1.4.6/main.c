#include <stdio.h>
#include <stdlib.h>

int main()
{
   int suma=0;
   int iloczyn=1;
   int n;
   scanf("%d", &n);
   if(n<2)
   {
       printf("zla liczba");
       exit(0);

   }
   for(int i=2;i<=n; i++)
   {
       if(i%2==0)
       {
           iloczyn=iloczyn*i;
       }
       //iloczyn=i*i;
       //suma=suma+iloczyn;

   }

   printf("%d ", iloczyn);
}
