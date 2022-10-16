#include <bits/stdc++.h>
using namespace std;

// global variables
struct node *head = NULL;

// creating a node
typedef struct node
{
    int number;
    struct node *next;

} node;

// function POP,SHOW & PUSH
void push(int);
void pop();
void show();

int main()
{
    int SIZE, answer, v;
    printf("input array size\n");
    scanf("%d", &SIZE);
    int *Array = new int[SIZE];

    while (1)
    {
        printf("stack perform following operations :\n");
        printf("push element input 1 \n");
        printf("pop element input 2 \n");
        printf("show elements input 3\n");
        printf("end program input 0\n");

        scanf("%d", &answer);

        if (answer == 0)
        {
            printf("exiting program\n");
            delete[] Array;
            return 0;
        }
        else if (answer == 1)
        {
            push(v);
        }
        else if (answer == 2)
        {

            pop();
        }
        else
        {
            show();
        }
    }
}

void push(int val)
{
    // Create a new node with given data.
    printf("input number\n");
    scanf("%d",&val);
    node *newNode = new node;
    newNode->number = val;

    // Make the new node points to the head node
    newNode->next = head;

    // Now make the new node as the head node.
    head = newNode;
}

void pop()
{
    node *temp;

    if (head == NULL)
    {
        printf("The stack is empty. we can't pop the element.");
    }
    else
    {
        printf("element popped is %d\n", head->number);
    }
    temp = head;
    head = head->next;

    free(temp);
}

void show()
{
    node *temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->number);
        temp = temp->next;
    }
    printf("NULL\n");
}