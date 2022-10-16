#include <bits/stdc++.h>
#define size 8
using namespace std;

// global variables
int tail, head;
int QueueArray[size];

// function ENQUEUE(add),DEQUEUE(remove)
void enqueue(int);
void dequeue();
void show();

int main()
{
    int answer, v;

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
    if (tail < size)
    {
        printf("enter value to be inserted in queue :\n");
        scanf("%d", &QueueArray[tail]);
        QueueArray[tail] = value;
        tail = tail + 1;
    }
    else
    {
        printf("overflowed\n");
    }
    return;
}

void dequeue()
{
    if (tail > 0)
    {
        for (int i = 0; i < tail - 1; i++)
        {
            printf(" dequeued element is: %d\n", QueueArray[head]);
            QueueArray[i] = QueueArray[i + 1];
        }
        head = head - 1;
    }
    else
    {
        printf("no value in queue\n");
    }
    return;
}

void show()
{

    if (tail < size)
    {
        printf("elements present in stack\n");
        for (int i = head; i < tail; i++)
        {
            printf("%d --> ", QueueArray[i]);
        }
    }
    else
    {
        printf("overloaded\n");
    }
}
