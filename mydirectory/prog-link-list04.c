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
        printf("\n 1. insert in link list:");
        printf("\n 2. display link list:");
        printf("\n 3. exit");
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
                break;
            default:
                printf("\n invalid choice");
        }
    }
}

void insert()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter data:");
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
