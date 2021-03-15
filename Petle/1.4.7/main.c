#include <stdio.h>
#include <stdlib.h>

int main()
{

   int iloczyn=1;
   int n,m;
   scanf("%d", &n);
   scanf("%d", &m);
   if(n>=m)
   {
       printf("zla liczba");
       exit(0);

   }
   for(int i=n;i<=m; i++)
   {
       iloczyn=iloczyn*i;


   }

   printf("%d", iloczyn);
}
