#include <stdio.h>
#define MAX 5

int a[MAX];
int front = -1;
int rear = -1;

void insertcq();
void deletecq();
void displaycq();

int main()
{
    int choice;
    while (1)
    {
        printf("\nCircular Queue MENU\n");
        printf("1. Insert element to queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertcq();
            break;
        case 2:
            deletecq();
            break;
        case 3:
            displaycq();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}

void insertcq()
{
    int item, temp;
    temp = (rear + 1) % MAX;
    if (temp == front)
    {
        printf("Queue is FULL \n");
    }
    else
    {
        if (front == -1) /*If queue is empty */
        {
            front = 0;
            rear = 0;
        }
        rear = temp;
        printf("Input the element for insertion in queue : ");
        scanf("%d", &item);
        a[rear] = item;
    }
}

void deletecq()
{
    int item;
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        item = a[front];
        a[front] = -1;
        printf("Element deleted from queue is : %d\n", item);
        if (front == rear) /* queue has only one element */
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

void displaycq()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Circular Queue elements are : \n");
        if (rear >= front)
        {
            for (i = front; i <= rear; i++)
            {
                printf("%d ", a[i]);
            }
        }
        else
        {
            for (i = front; i < MAX; i++)
            {
                printf("%d ", a[i]);
            }
            for (i = 0; i <= rear; i++)
            {
                printf("%d ", a[i]);
            }
        }
    }
}
