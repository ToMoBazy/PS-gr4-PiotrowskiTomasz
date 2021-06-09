#include <stdio.h>
#include <stdlib.h>


int funkcja(int *a , int *b)
{
   if(*a>*b)
    return *b;

   return *a;

}

int main()
{
   int *a, *b;
   int x=5, y=2;
   int zm;

   a = &x;

   b = &y;

   zm = funkcja(a,b);
   printf("%d", zm);


}
