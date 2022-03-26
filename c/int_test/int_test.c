#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = 7;
    float b = round((float) a / 2);
    int c = 4;
    
    printf("%f %i\n", b, c);

    if ( b == c)
    {
        printf("Success\n");
    }
}