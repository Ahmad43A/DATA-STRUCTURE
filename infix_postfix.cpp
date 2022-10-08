#include <iostream>
#include <string.h>
using namespace std;

int top = -1, es = 10;
char infix[10], postfix[10], stack[10];

int isoperator(char op)
{
    if (op == '^')
    {
        return 3;
    }
    else if (op == '*' || '/')
    {
        return 2;
    }
    else if (op == '+' || "-")
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int infixTopostfix(char *infixpt)
{
    int j = 0;
    char *infix = new char [es];
    strcpy(infix, "a+b");
    strcpy(postfix, "");

    // operand goes in postfix while operator goes in stack
    for (int i = 0; i < strlen(infix); i++)
    {
        if (isoperator(infix[i]) == 0)
        {
            postfix[j++] = infix[i];
        }
        else
        {
            while (top != -1 && isoperator(infix[i]) <= isoperator(stack[top]))
            {
                postfix[j] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }
    while (top >= 0)
    {
        postfix[j] = stack[top--];
    }

    postfix[j++] = '\0';
    printf("%s", postfix);
    return 0;
}

int main()
{
    printf("Enter the infix expression\n");
    scanf( "%d" ,&infix);
    printf("The postfix expression is: ");
    infixTopostfix(infix);

    return 0;
}