#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start, *p, *q, *m, *n;
void insert_first();
void delet_first();
void display();
int main()
{
    int ch;
    start = NULL;
    while (1)
    {
        printf("\n menu of link list");
        printf("\n 1. insert in fist position ");
        printf("\n 2. delet from first position");
        printf("\n 3. display");
        printf("\n 4. exit");
        printf("\n  enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_first();
            break;
        case 2:
            delet_first();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n  wrong choice");
        }
    }
    return 0;
}
void insert_first()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n enter your data");
    scanf("%d", &p->data);
    if (start == NULL)
    {
        start = p;
        p->link = NULL;
        q = p;
    }
    else
    {
        p->link = start;
        start = p;
    }
}
void delet_first()
{
    if (start == NULL)
        
    {
        printf("\n empty link list");
    }
    else
    {
        struct node *p = start;
        start = p->link;
        p->link = NULL;
        printf("\n deleted data %d", p->data);
        free(p);
    }
}
void display()
{
    if(start==NULL)
    {
        printf("\n link list is empty");
    }
    else
    {
        p=start;
        while(p!=NULL)
        {
            printf("\n %d ",p->data);
            p=p->link;
        }
    }
}