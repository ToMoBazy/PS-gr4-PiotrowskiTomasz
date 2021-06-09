#include <stdio.h>
#include <stdlib.h>


void funkcja(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;




}

int main()
{
int *a=5, *b=10;
printf("%d ", a);
printf("%d ", b);

funkcja(&a, &b);

printf("%d ", a);
printf("%d ", b);






}
