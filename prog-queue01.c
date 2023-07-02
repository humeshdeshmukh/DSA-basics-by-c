#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX]; // global variable
int front, rear;
void insertq();
void deletq();
void displayq();
int main()
{
    int ch;
    front = rear = 1;
    while (1)
    {
        printf("\n menu of queue");
        printf("\n 1. insert in queue");
        printf("\n 2. delete from queue");
        printf("\n 3. display queue");
        printf("\n 4.exit");
        printf("\n enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            void insertq();
            break;
        case 2:
            void deletq();
            break;
        case 3:
            void displayq();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n wrong choice");
        }
    }
}
void insertq()
{
    int data;
    if (rear == MAX - 1)
    {
        printf("\n queue is full");
    }
    else
    {
        printf("\n enter your number to to insert");
        scanf("%d", &data);
        rear = rear + 1;
        queue[rear] = data;
    }
}
void deletq()
{
    int data;
    if (rear == front)
    {
        printf("\n queue is empty");
        front = rear = -1;
    }
    else
    {
        front = front + 1;
        data = queue[front];
        printf("\n Deleted data: %d", data);
    }
}
void display()
{   int i;
    if (front == rear)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n queue element are:");
        for (i = front + 1; i <= rear; i++)
        {
            printf("\t %d", queue[i]);
        }
    }
}