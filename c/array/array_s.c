#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calc(int length, string w)
{
    int score = 0;
    int scrab = 0;
    for (int a = 0, x = strlen(w); a < x; a++)
    {
        score = w[a] - 97;
        if (score < 0 || score > 25)
        {
            scrab = scrab + 0;
        }
        else
        {
            scrab = scrab + POINTS[score];
        }
        printf("%i\n", score);
        printf("%i\n", scrab);
    }
    return scrab;
}

int main(void)
{
    string s[2];
    s[0] = get_string("Player 1: ");
    s[1] = get_string("Player 2: ");
    
    for (int i = 0, n = strlen(s[0]); i < n; i ++)
    {
        if (isupper(s[0][i]))
        {
            s[0][i] = tolower(s[0][i]);
        }
    }
    
    for (int i = 0, n = strlen(s[1]); i < n; i ++)
    {
        if (isupper(s[1][i]))
        {
            s[1][i] = tolower(s[1][i]);
        }
    }

    int scores[2];
    scores[0] = calc(strlen(s[0]), s[0]);
    scores[1] = calc(strlen(s[1]), s[1]);
    
    printf("%i\n", scores[0]);
    printf("%i\n", scores[1]);

    if (scores[0] > scores[1])
    {
        printf("Player 1 Wins!\n");
    }
    else if (scores[0] < scores[1])
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}