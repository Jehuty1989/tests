#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *input = fopen("test.txt", "r");
    
    if (input == NULL)
    {
        printf("File error\n");
        return 1;
    }
    
    FILE *output = fopen("copy.txt", "w");
    
    if (output == NULL)
    {
        printf("File error\n");
        return 2;
    }
    
    char buffer[16];
    
    fread(buffer, 1, 16, input);
    printf("%s\n", buffer);
    
    fwrite(buffer, 1, 16, output);
    
    fclose(input);    
    fclose(output);
}