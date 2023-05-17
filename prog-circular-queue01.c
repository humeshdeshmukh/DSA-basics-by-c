// write a circuler queue program
// implementation of circular queue using Array
#include <stdio.h>
#define max 10
int queue[max];//array declaration
int front = -1;
int rear = -1;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice = 1, num;

    while (choice < 4 && choice != 0)

    {
        printf("\nPress 1: Insert an element");
        printf("\nPress 2: Delete an element");
        printf("\nPress 3: Display the element");
        printf("\npress 4. Exit");
        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("Enter the element which is to be inserted");
            scanf("%d", &num);
            enqueue(num);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
        case 4:
            exit(0);
            break;
        default:
            printf("\n wrong choice");
        }
    }
    return 0;
}
void enqueue(int element)
{

    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else
    {
        if ((rear + 1) % max == front)
        {
            printf("Queue is overflow..");
        }
        else
        {
            rear = (rear + 1) % max;
            queue[rear] = element;
        }
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is underflow..");
    }
    else
    {
        if (front == rear)
        {
            printf("\nThe dequeued element is %d", queue[front]);
            front = -1;
            rear = -1;
        }
        else
        {
            printf("\nThe dequeued element is %d", queue[front]);
            front = (front + 1) % max;
        }
    }
}

void display()
{

    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\nElements in a Queue are :");
        while (i <= rear)
        {
            printf("%d,", queue[i]);
            i = (i + 1) % max;
        }
    }
}