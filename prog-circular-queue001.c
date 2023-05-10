#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front, rear;

void insertq();
void deleteq();
void displayq();

int main()
{
    int ch;
    front = rear = -1;

    while (1)
    {
        printf("\n1. Insert in Queue");
        printf("\n2. Delete from Queue");
        printf("\n3. Display Queue");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
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
                printf("\nInvalid choice");
                break;
        }
    }
    return 0;
}

void insertq()
{
    int item;
    if (rear == MAX - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    }
}

void deleteq()
{
    int item;
    if (front == rear)
    {
        printf("\nQueue is Empty");
        front = rear = -1;
    }
    else
    {
        front++;
        item = queue[front];
        printf("\nDeleted Item : %d", item);
    }
}

void displayq()
{
    int i;
    if (front == rear)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nElements in Queue are: ");
        for (i = front + 1; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
