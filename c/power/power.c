#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t a, b, c, d, e, f, g, h, i, gx, gy, result;

    a = 0;
    b = 128;
    c = 255;
    d = 0;
    e = 128;
    f = 255;
    g = 0;
    h = 128;
    i = 255;

    gx = (float)((a * -1) + (b * 0) + (c * 1) + (d * -2) + (e * 0) + (f * 2) + (g * -1) + (h * 0) + (i * 1));
    gy = (float)((a * -1) + (b * -2) + (c * -1) + (d * 0) + (e * 0) + (f * 0) + (g * 1) + (h * 2) + (i * 1));

    result = round(sqrt((float)(pow(gx, 2) + pow(gy, 2))));
}