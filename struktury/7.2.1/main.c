#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a,b,c;
};

double obwod(struct trojkat x)
{
    return x.a+x.b+x.c;
}
int main()
{
    struct trojkat t1={5, 12, 13}, t2={7, 24, 25};
    printf("%f\n", obwod(t1));
    printf("%f", obwod(t2));
    return 0;
}
