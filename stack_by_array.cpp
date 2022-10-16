#include <bits/stdc++.h>
#define size 6
using namespace std;

// function POP,SHOW & PUSH
void pop();
void show();
void push();

int stackArray[size];
int top = -1;

int main()
{
    int answer;

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
            return 0;
        }
        else if (answer == 1)
        {
            push();
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

void push()
{
    while (top != size - 1)
    {
        int element;
        printf("enter values to be inserted in stack :\n");
        scanf("%d", &element);
        top = top + 1;
        stackArray[top] = element;
    }
}

void pop()
{
    if (top != -1)
    {

        printf(" Popped element: %d\n", stackArray[top]);
        top = top - 1;
    }
    else
    {
        printf("value does not exist");
    }
}

void show()
{

    if (top != -1)
    {
        printf("elements present in stack\n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d\n", stackArray[i]);
        }
    }
    else
    {
        printf("overloaded\n");
    }
}
