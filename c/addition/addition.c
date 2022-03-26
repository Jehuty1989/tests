#include <stdio.h>
#include <cs50.h>

int main(void)

//A simple 32bit addition calculator
{
    //Request first number
    int x = get_int("First number: ");
    
    //Request second number
    int y = get_int("Second number: ");
    
    //Display answer as first plus second number
    printf("Answer: %i\n", x + y);
}