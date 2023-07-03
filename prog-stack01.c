#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void push();
void pop();
void display();
int stack[MAX];
int top;
int main()
{
    int ch;
    top = -1;
    while (1)
    {
        printf("\n menu of stack");
        printf("\n 1.push in stack");
        printf("\n 2.pop the element");
        printf("\n 3. display");
        printf("\n 4. exit");
        printf("\n enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            void push();
            break;
        case 2:
            void pop();
            break;
        case 3:
            void display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n wrong choice");
        }
    }
    return 0;
}
void push()
{
    int data;
    if (top == MAX - 1)
    {
        printf("\n stack  is full");
    }
    else
    {
        printf("\n enter the value to be push into stack: ");
        scanf("%d", &data);
        top = top + 1;
        stack[top] = data;
    }
}
void pop()
{
    int data;
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        data = stack[top];
        top = top - 1;
        printf("\n data popped from stack:%d", data);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n stack element :");
        for (i = top; i >= 0; i--)
        {
            printf("\n %d ", stack[i]);
        }
    }
}