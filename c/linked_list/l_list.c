#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
    char number[5];
    struct list *next;
}
list;

char buffer[6];

void write_list(FILE *file, list *head, list *current);
void print_list(list *head, list *current);
void free_list(list *head, list *current);

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
    
    list *head = malloc(sizeof(list));
    if (head == NULL)
    {
        return 1;
    }
    
    fscanf(file, "%s", buffer);

    strcpy(head->number, buffer);
    
    head->next = malloc(sizeof(list));
    if (head->next == NULL)
    {
        return 1;
    }
    
    list *current = head->next;

    write_list(file, head, current);
    print_list(head, current);
    free_list(head, current);
    
    fclose(file);
}

void write_list(FILE *file, list *head, list *current)
{
    if (feof(file))
    {
        current->next = NULL;
        return;
    }

    fscanf(file, "%s", buffer);

    strcpy(current->number, buffer);
    
    current->next = malloc(sizeof(list));
    if (current->next == NULL)
    {
        return;
    }
    current = current->next;
    
    write_list(file, head, current);

    return;
}

void print_list(list *head, list *current)
{
    fprintf(stdout, "\nLIST:\n");
    
    current = head;

    while (current->next != NULL)
    {
        fprintf(stdout, "%s\n", current->number);

        current = current->next;
    }

    return;
}

void free_list(list *head, list *current)
{
    current = head;
    
    while (current->next != NULL)
    {
        head = head->next;
        free(current);
        current = head;
    }
    
    free(head);
    
    return;
}