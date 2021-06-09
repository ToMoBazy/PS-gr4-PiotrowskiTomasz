#include <stdio.h>
#include <stdlib.h>
int foo(char *nap1, char *nap2)
{
for(int i=0; i!=0; i++)
{


    if(nap1[i]!=nap2[i])
    {

        return 1;
    }
}
    return 0;

}

int main()
{
   char *nap1, *nap2;
   int x;
   scanf("%p", nap1);
   scanf("%p", nap2);

    x = foo(*nap1, *nap2);

   printf("%d", x);
}
