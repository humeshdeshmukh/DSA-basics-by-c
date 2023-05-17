/* write a user define function node count and which return the number of node in present in given link list*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
} *p, *q, *start;

int nodecount(struct node *s);

int main()
{
    int count, choice;
    start = NULL;

    while (1)
    {
        printf("\n 1. Count nodes in the list:");
        printf("\n 2. Exit");
        printf("\n Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                count = nodecount(start);
                printf("\n Total number of nodes are: %d", count);
                break;
            case 2:
                exit(0);
            default:
                printf("\n Invalid Choice.");
        }
    }
}

int nodecount(struct node *s)
{
    int count = 0;
    if(s == NULL)
    {
        return 0;
    }
    else
    {
        p = s;
        while(p != NULL)
        {
            count++;
            p = p->link;
        }
        return count;
    }
}
