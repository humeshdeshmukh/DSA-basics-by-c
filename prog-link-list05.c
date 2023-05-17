#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL, *p = NULL, *q = NULL;

void insert()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter data: ");
    scanf("%d", &p->data);
    p->link = NULL;

    if (start == NULL)
    {
        start = p;
        q = p;
    }
    else
    {
        q->link = p;
        q = p;
    }
}

void display()
{
    if (start == NULL)
    {
        printf("\n empty linked list");
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

int main()
{
    int choice;

    while (1)
    {
        printf("\n 1. insert in link list:");
        printf("\n 2. display link list:");
        printf("\n 3. exit");
        printf("\n enter your choice: ");
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
            printf("\n invalid choice");
        }
    }

    return 0;
}
