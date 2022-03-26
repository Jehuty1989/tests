#include <cs50.h>
#include <stdio.h>

int fact(int n);

int main(void)
{
    int a = 0;
    do
    {
        a = get_int("Number: ");

        if (a < 1)
            printf("Positive numbers only.\n");
    }
    while (a <= 0);

    a = fact(a);
    printf("Answer: %i\n", a);
}

// fact. Inputs: n - positive only. Error if negative.
int fact(int a)
{
    if (a == 1)
        return 1;
    else
        return a * fact(a - 1);
}