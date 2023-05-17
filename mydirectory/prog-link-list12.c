/*create user difine function delatepos() to delate node  from given position*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*p,*q,*start,*m,*n;

void deletepos(struct node **start)
{
    int pos, count = 0, i;

    printf("\nEnter position: ");
    scanf("%d", &pos);

    // Count the number of nodes in the list
    struct node *p = *start;
    while (p != NULL)
    {
        count++;
        p = p->link;
    }

    if (pos < 1 || pos > count)
    {
        printf("\nInvalid position\n");
    }
    else
    {
        // Delete the node at the specified position
        if (pos == 1)
        {
            p = *start;
            *start = (*start)->link;
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
            n->link = m->link;
            m->link = NULL;
            p = m;
        }
        printf("\nDeleted item = %d", p->data);
        free(p);
    }
}

int main()
{
    int choice;
    struct node *start = NULL;

    while (1)
    {
        printf("\n1. Delete at position");
        printf("\n2. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            deletepos(&start);
            break;
        case 2:
            exit(0);
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }

    return 0;
}
