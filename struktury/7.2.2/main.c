#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a,b,c;
};

void copy(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}
int main()
{
    struct trojkat troj1={5, 12, 13}, troj2={7, 24, 25};
    printf("%f %f %f\n", troj2.a, troj2.b, troj2.c);
    copy(troj1, &troj2);
    printf("%f %f %f", troj2.a, troj2.b, troj2.c);
    return 0;
}
