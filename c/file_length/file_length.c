#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *input = fopen("test.txt", "r");
    if (input == NULL)
    {
        printf("File open error\n");
        return 1;
    }
    
    int a = 0;
    int16_t b;
    
    do
    {
        b = fgetc(input);
        if (feof(input))
        {
            break;
        }
        printf("%c\n", b);
        a++;
    }
    while (1);
}