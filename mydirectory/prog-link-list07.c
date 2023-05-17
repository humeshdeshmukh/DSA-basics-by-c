/*create a function insertlast() which will insert the node at the last position*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *link;
} *start, *p, *q;

void insertlast();
void display();

int main()
{
    int choice;
    start = NULL;

    while (1)
    {
        printf("\n 1. insert last in link list:");
        printf("\n 2. display link list:");
        printf("\n 3. exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertlast();
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

void insertlast()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d", &(p->item));
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
            printf("\t %d", p->item);
            p = p->link;
        }
    }
}
