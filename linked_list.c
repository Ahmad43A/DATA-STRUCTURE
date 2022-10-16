#include <stdio.h>
#include <stdlib.h>

// creating a node
typedef struct node
{
    int number;
    struct node *next;

} node;

int main()
{

    // list of SIZE
    node *list = NULL;

    // making a node 'n' for adding number to list
    node *n = malloc(sizeof(node));

    // a check to see if pointer null or not
    if (n == NULL)
    {
        return 1;
    }

    n->number = 1;
    n->next = NULL;

    // point to new node
    list = n;

    // adding number to list
    n = malloc(sizeof(node));

    if (n == NULL)
    {
        free(list);
        return 1;
    }

    n->number = 2;
    n->next = NULL;

    // point to next of new node
    list->next = n;

    // adding number to list
    n = malloc(sizeof(node));

    if (n == NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }

    n->number = 6;
    n->next = NULL;

    // point to next of next of new node
    list->next->next = n;

    // printing values
    printf("values are :\n");
    for (node *temp = list; temp != NULL; temp = temp->next)
    {
        printf("%d\n", temp->number);
    }

    // freeing the list
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
        printf("list has been freed\n");
    }

    return 0;
}
