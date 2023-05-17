/*create a function() to delete a node from last position*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *link;
};

struct node *start = NULL;

void deletlast();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\n 1. delete last in linked list:");
        printf("\n 2. display linked list:");
        printf("\n 3. exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            deletlast();
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

void deletlast()
{
    struct node *p, *q;
    // Check if the list is empty
    if (start == NULL)
    {
        printf("\n empty linked list");
    }
    else
    {
        // Traverse to the last node
        p = start;
        while (p->link != NULL)
        {
            q = p;
            p = p->link;
        }
        // If there is only one node, delete it
        if (p == start)
        {
            start = NULL;
        }
        // Delete the last node
        else
        {
            q->link = NULL;
        }
        printf("\n delete item=%d", p->item);
        free(p);
    }
}

void display()
{
    struct node *p;
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
