#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int a;
    unsigned int b;
};

int main()
{
    union super_int test;
    test.a = 4;
    test.b = -4;
    printf("%d %d\n", test.a, test.b);
    test.a = -4;
    test.b = 4;
    printf("%d %d\n", test.a, test.b);
    test.b = -4;
    test.a = 4;
    printf("%d %d\n", test.a, test.b);
    test.b = 4;
    test.a = -4;
    printf("%d %d", test.a, test.b);
    return 0;
}
