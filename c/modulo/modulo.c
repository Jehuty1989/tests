#include <stdio.h>

int main(void)

{
    long a = 23456;
    long b, c, d, e, f;

    b = a % 10;
    c = (a / 10) % 10;
    d = (a / 100) % 10;
    e = (a / 1000) % 10;
    f = (a / 10000) % 10;

    printf("%ld\n", b);
    printf("%ld\n", c);
    printf("%ld\n", d);
    printf("%ld\n", e);
    printf("%ld\n", f);
}