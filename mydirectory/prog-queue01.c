#include <stdio.h>
#define MAX 5
int queue[MAX];  // global variables
int front, rear; // global variables
void insertq();
void deleteq();
void displayq();
void main()
{
    int ch;
    front = rear = -1;
    while (1)
    {
        printf("\n 1. Insert in Queue");
        printf("\n 2. Delete from Queue");
        printf("\n 3. Display Queue");
        printf("\n 4. Exit");
        printf("\n Enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertq();
            break;

        case 2:
            deleteq();
            break;

        case 3:
            displayq();
            break;

        case 4:
            exit(0);

        default:
            printf("\n Invalid choice");
        }
    }
}

void insertq()
{
    int item;
    if (rear == MAX - 1)
    {
        printf("\n Queue is Full");
    }
    else
    {
        printf("\n Enter the value to be insert ");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}

void deleteq()
{
    int item;
    if (front == rear)
    {
        printf("\n Queue is Empty");
        front = rear = -1;
    }
    else
    {
        front = front + 1;
        item = queue[front];
        printf("\n Deleted Item : %d ", item);
    }
}

void displayq()
{
    int i;
    if (front == rear)
    {
        printf("\n Queue is Empty");
        front = rear = -1;
    }
    else
    {
        for (i = front + 1; i <= rear; i++)
        {
            printf("\t %d", queue[i]);
        
        }
        
    }
}
