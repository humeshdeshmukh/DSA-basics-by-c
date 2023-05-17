/*write a c program to inserte  the code at given position*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *p, *q, *start, *m, *n;

void insertpos(struct node **start)
{
    int pos, count = 0, i;

    printf("\nEnter position: ");
    scanf("%d", &pos);

    // Count the number of nodes in the list
    p = *start;
    while (p != NULL)
    {
        count++;
        p = p->link;
    }

    if (pos < 1 || pos > count + 1)
    {
        printf("\nInvalid position\n");
    }
    else
    {
        // Create the new node
        p = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d", &p->data);
        p->link = NULL;

        // Insert the new node at the specified position
        if (pos == 1)
        {
            p->link = *start;
            *start = p;
        }
        else
        {
            i = 1;
            m = *start;
            while (i < pos)
            {
                n = m;
                m = m->link;
                i++;
            }
            n->link = p;
            p->link = m;
        }
    }
}

void display(struct node *start)
{
    struct node *p;

    if (start == NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        p = start;
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->link;
        }
    }
}

int main()
{
    int choice;
    struct node *start = NULL;

    while (1)
    {
        printf("\n1. Insert at position");
        printf("\n2. Display");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertpos(&start);
            break;
        case 2:
            display(start);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }

    return 0;
}
