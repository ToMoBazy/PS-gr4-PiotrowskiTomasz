#include <stdio.h>
#include <stdlib.h>
int a(int n)
{
int pom=1,x=0;



if(n==0)
{
    return 1;
}





if(n>=1)
{
    for(int i=1; i<=n; i++)
    {
        pom=2*pom+5;
        x=pom;
    }

}

return x;





}



int main()
{

    int zm,b;

    zm= a(0);

    printf("%d ", zm);

}
