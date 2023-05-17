#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *link;
} *start, *p, *q;
void insert_cll();
void delete_cll();
void display_cll();
int main()
{
    int ch;
    while (1)
    {
        printf("\n insert in circular link list");
        printf("\n 2. Delete from circular linked list");
        printf("\n 3. Display the circular linked list");
        printf("\n 4. exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert_cll();
            break;
        case 2:
            delete_cll();
            break;
        case 3:
            display_cll();
            break;
        case 4:
            exit(0);
        default:
            printf("\n invalid choice");
        }
    }
}
void insert_cll()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter data:");
    scanf("%d", &p->data);
    if (start == NULL)
    {
        start = p;
        p->link = start;
    }
    else
    {
        p->link = start->link;
        start->link = p;
    }
}
void delete_cll()
{
    if (start == NULL)
    {
        printf("\n Empty linked list");
    }
    else
    {
        if (start == start->link)
        {
            p = start;
            p->link = NULL;
            printf("\n %d ", p->data);
            free(p);
            start = NULL;
        }
        else
        {
            p = start->link;
            start->link = p->link;
            p->link = NULL;
            printf("%d", p->data);
            free(p);
        }
    }
}
void display_cll()
{
    if (start == NULL)
    {
        printf("\n empty cll");
    }
    else
    {
        p = start;
        do
        {
            printf("\t %d", p->data);
            p = p->link;
        } while (p != start);
    }
}