#include <stdio.h>
#include <conio.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push();
void pop();
void display();
void main()
{
    int ch;
    
    while (1)
    {
        printf("\n 1 push");
        printf("\n 2 pop");
        printf("\n 3 display");
        printf("\n 4 exit ");
        printf("\n choice");
        printf("\n enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n wrong choice");
        }
    }
}

void push()
{
    int num;
    printf("\n enter the number to be entered");
    scanf("%d", &num);
    if (top == MAX - 1)
    {
        printf("\n stack is full");
    }
    else
    {
        top = top + 1;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n Deleted element is : %d", stack[top]);
        top = top - 1;
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
        for (i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
        }
    }
}

