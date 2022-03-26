#include <stdio.h>
#include <cs50.h>

int get_luhn(void);
long x;

int main(void)
{

    int mc = 0;
    int z = 0;
    
    x = get_long("Number: ");
    
    
    if (x > 5099999999999999 && x < 5600000000000000)
    {
        mc = 1;
        
        z = get_luhn();
    }
    
    if (mc == 1 && z == 0)
    {
        printf("MASTERCARD\n");
    }

    else
    {
        printf("INVALID\n");
    }
}

int get_luhn(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p = 0;
    int luhn;
    
    a = x % 10;
    b = ((x / 10) % 10) * 2;
    c = (x / 100) % 10;
    d = ((x / 1000) % 10) * 2;
    e = (x / 10000) % 10;
    f = ((x / 100000) % 10) * 2;
    g = (x / 1000000) % 10;
    h = ((x / 10000000) % 10) * 2;
    i = (x / 100000000) % 10;
    j = ((x / 1000000000) % 10) * 2;
    k = (x / 10000000000) % 10;
    l = ((x / 100000000000) % 10) * 2;
    m = (x / 1000000000000) % 10;
    n = ((x / 10000000000000) % 10) * 2;
    o = (x / 100000000000000) % 10;
    p = ((x / 1000000000000000) % 10) * 2;

    if (b > 9)
    {
        b = b - 9;
    }

    if (d > 9)
    {
        d = d - 9;
    }

    if (f > 9)
    {
        f = f - 9;
    }

    if (h > 9)
    {
        h = h - 9;
    }

    if (j > 9)
    {
        j = j - 9;
    }

    if (l > 9)
    {
        l = l - 9;
    }

    if (n > 9)
    {
        n = n - 9;
    }

    if (p > 9)
    {
        p = p - 9;
    }

    luhn = (a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p) % 10;
    
    return luhn;
}