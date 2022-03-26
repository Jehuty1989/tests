#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

float average(int length, int array[])
{
    int sum = 0;
    for (int x = 0; x < length; x++)
    {
        sum = sum + array[x];
        printf("%i\n", array[x]);
    }
    return sum / (float) length;
}

int main(void)
{
    int TOTAL = get_int("How many scores?: ");
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score:");
    }

    printf("Average: %f\n", average(TOTAL, scores));
}