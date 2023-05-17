/*write menu driven program contaning insert at fist/last/pos delate first/last/pos count and display  nodes */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *start, *p, *q, *m, *n;
void insertpos();
void deletepos();
void display();
void insertfirst();
void deletefirst();
void insertlast();
void deletelast();
void count();
void insertfirst()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d", &(p->data));
    if (start == NULL)
    {
        p->link = NULL;
        q = p;
    }
    else
    {
        p->link = start;
        start = p;
    }
}
void deletefirst()
{
    if (start == NULL)
    {
        printf("\n emptyid linked list");
    }
    else
    {
        p = start;
        start = p->link;
        p->link = NULL;
        printf("\n delete item=%d", p->data);
        free(p);
    }
}
void insertlast()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter element");
    scanf("%d", &(p->data));
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
void deletelast()
{
    if (start == NULL)
    {
        printf("\n empty linked list");
    }
    else
    {
        p = start;
        if (p->link = NULL)
        {
            start = NULL;
        }
        while (p->link != q)
        {
            p = p->link;
        }
        p->link = NULL;
        printf("\n delete item=%d", p->data);
        free(p);
        q = p;
    }
}
int nodecount(struct node *start)
{
    int count = 0;
    if (start == NULL)
    {
        return (0);
    }
    else
    {
        p = start;
        while (p != NULL)
        {
            count++;
            p = p->link;
        }
        return (count);
    }
}

void insertpos()
{
    int pos, count;
    printf("enter element");
    scanf("%d", &pos);
    count = nodecount(start);
    if (pos < 0 || pos > count)
    {
        printf("\n invalid range");
    }
    else
    {
        int i;
        i = 0;
        p = (struct node *)malloc(sizeof(struct node));
        printf("\n enter data");
        scanf("%d", &(p->data));
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
void deletepos()
{
    int pos, count;
    printf("\n enter pos");
    scanf("%d", &pos);
    count = nodecount(start);
    if (pos < 0 || pos > count)
    {
        printf("\n invalid range");
    }
    else
    {
        int i;
        i = 0;
        m = start;
        while (i < pos)
        {
            n = m;
            m = m->link;
            i++;
        }
        n->link = m->link;
        m->link = NULL;
        printf("delete item=%d", m->data);
        free(m);
    }
}
void display()
{
    if (start == NULL)
    {
        printf("\n linked list is empty");
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
    int ch;
    start = NULL;
    while (1)
    {
        printf("\n 1. insert first");
        printf("\n 2. delete first");
        printf("\n 3. insert last");
        printf("\n 4. delete last");
        printf("\n 5. insert any pos ");
        printf("\n 6. delete any pos ");
        printf("\n 7. count");
        printf("\n 8. display");
        printf("\n 9. exit");
        printf("\n enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertfirst();
            break;

        case 2:
            insertlast();
            break;

        case 3:
            insertpos();
            break;

        case 4:
            deletefirst();
            break;

        case 5:
            deletelast();
            break;

        case 6:
            deletepos();
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);
            break;

        default:
            printf("\n invalid choice");
            break;
        }
    }
}