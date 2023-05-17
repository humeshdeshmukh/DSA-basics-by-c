#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *start, *p;

void insert();
void display();

int main()
{
    int choice;
    start = NULL;

    while (1)
    {
        printf("\n 1. Insert in Linked List");
        printf("\n 2. Display the Linked List");
        printf("\n 3. Exit");
        printf("\n Enter your choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("\n Wrong Input");
        }
    }

    return 0;
}

void insert()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data : ");
    scanf("%d", &p->data);

    if (start == NULL)
    {
        p->link = NULL;
        start = p;
    }
    else
    {
        p->link = start;
        start = p;
    }
}

void display()
{
    if (start == NULL)
    {
        printf("\n Linked list is Empty");
    }
    else
    {
        p = start;

        while (p != NULL)
        {
            printf("\t %d", p->data);
            p = p->link;
        }
    }
}
