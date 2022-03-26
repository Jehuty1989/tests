#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <sys/time.h>

typedef struct node
{
    char word[46];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

char buffer[46];

bool load(FILE *file);
unsigned int hash(const char *word, node *n);
void print();

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stdout, "Only 1 file.\n");
        return 1;
    }
    
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stdout, "Failed to open file.\n");
        return 1;
    }

    load(file);
    print();
}

bool load(FILE *file)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        printf("Could not allocate memory\n");
        return false;
    }
    
    n->next = NULL;

    fscanf(file, "%s", n->word);
    
    if (feof(file))
    {
        return true;
    }

    hash(n->word, n);
    load(file);

    return true;
}

unsigned int hash(const char *word, node *n)
{
    int i = word[0] - 97;

    if (table[i] != NULL)
    {
        n->next = table[i];
        
        table[i] = n;
        
        return 0;
    }
    
    table[i] = n;
    
    table[i]->next = NULL;
    
    return 0;
}

void print()
{
    node *current[26];
    
    for (int i = 0; i < 26; i++)
    {
        if (current[i] == NULL)
        {
            return;
        }
        
        current[i] = table[i];
        
        while (current[i] != NULL)
        {
            printf("%s\n", current[i]->word);
            current[i] = current[i]->next;
        }
    }
    
    return;
}