#include <bits/stdc++.h>
using namespace std;

// creating a node
typedef struct node
{
    int number;
    struct node *next;

} node;

// global variables
node *head = NULL, *tail = NULL;

// functions ENQUEUE(add),DEQUEUE(remove) & shoe
void enqueue(int);
void dequeue();
void show();

int main()
{

    int SIZE, answer, v;
    printf("input array size\n");
    scanf("%d", &SIZE);
    int *QueueArray = new int[SIZE];

    while (1)
    {
        printf("queue perform following operations :\n");
        printf("enqueue(add) element input 1 \n");
        printf("dequeue(remove) element input 2 \n");
        printf("show elements input 3\n");
        printf("end program input 0 \n");

        scanf("%d", &answer);

        if (answer == 0)
        {
            printf("exiting program\n");
            delete[] QueueArray;
            return 0;
        }
        else if (answer == 1)
        {
            enqueue(v);
        }
        else if (answer == 2)
        {

            dequeue();
        }
        else
        {
            show();
        }
    }
}

void enqueue(int value)
{
    printf("input number\n");
    scanf("%d", &value);
    node *newNode = new node;
    newNode->number = value;

    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeue()
{
    node *temp;
    if (head == NULL)
    {
        printf("no value present\n");
    }
    else
    {
        printf("element popped is %d\n", head->number);
        temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    free(temp);
}

void show()
{

    node *temp = head;

    while (temp)
    {
        printf("%d->", temp->number);
        temp = temp->next;
    }
    printf("NULL\n");
}
