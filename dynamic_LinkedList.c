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

    // making  a temp pointer
    node *tmp = malloc(sizeof(node));

    // taking input from user
    while (tmp != NULL)
    {
        printf("input values :\n");
        scanf("%d", &tmp);
        tmp = tmp->next;
    }

    // printing values
    printf("values are :\n");

    for (node *temp = list; temp != NULL; temp = temp->next)
    {
        printf("%d\n", temp->number);
    }

    // freeing the list
    while (list != NULL)
    {
        node *p = list->next;
        free(list);
        list = p;
        printf("list has been freed\n");
    }

    return 0;
}
