#include <stdio.h>
#include <stdlib.h>


int funckja(int n)
{
int max,k;
   printf("Podaj n: ");
   scanf("%d", &n);
for( k=2; k<n; k++)
{
    if(n%k==0)
    {
        max=k;
    }
}

return max;

}


int main()
{
int n;
int zm = funckja(n);

printf("%d", zm);

}
