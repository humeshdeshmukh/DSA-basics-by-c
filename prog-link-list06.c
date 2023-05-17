/*create a function of insertfirst () in which insert the node at the first position*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *link;
} *start, *p,*q;

void insertfirst();
void display();

int main()
{
    int choice;
    start = NULL;

    while (1)
    {
        printf("\n 1. insert first in link list:");
        printf("\n 2. display link list:");
        printf("\n 3. exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertfirst();
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



void insertfirst()
{ 
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d", &(p->item));
    if (start == NULL)
    {
        start = p;
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
            printf("\t %d", p->item);
            p = p->link;
        }
    }
}
