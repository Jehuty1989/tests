#include <stdio.h>
#include <cs50.h>

int main(void)

{
    float x = get_float("1st no.: ");
    
    float y = get_float("2nd no.: ");
    
    printf("Answer: %f\n", x / y);
}