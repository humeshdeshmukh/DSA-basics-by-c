#include<stdio.h>
#include<malloc.h>
struct dnode
{
    struct dnode *llink;
    int data;
    struct dnode *rlink;
}*start,*p,*q;
void insert_dll();
void delete_dll();
void display_dll();
int main()
{
    int ch;
    start=NULL;
    while(1)
    {
        printf("\n 1. Insert");
        printf("\n 2. Delete");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_dll();
            break;
            case 2: delete_dll();
            break;
            case 3: display_dll();
            break;
            case 4: exit(0);
            break;
            default: printf("\n Invalid choice");
        }
    }
}
void insert_dll()
{
    p=(struct dnode*)malloc(sizeof(struct dnode));
    printf("\n Enter data: ");
    scanf("%d",&p->data);
    if(start==NULL)
    {
        p->rlink=NULL;
        p->llink=NULL;
        start=p;
    }
    else
    {
        p->llink=NULL;
        p->rlink=start;
        p->rlink->llink=p;
        start=p;
    }
}
void delete_dll()
{
    if(start==NULL)
    {
        printf("\n Empty list");
    }
    else
    {
        p=start;
        p->rlink->llink=NULL;
        start=p->rlink;
        p->rlink=NULL;
        free(p);
    }
}
void display_dll()
{
    int choice;
    printf("\n Traversal path");
    printf("\n 1. Forward direction");
    printf("\n 2. Backward direction");
    printf("\n Please select: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: p=start;
            while(p!=NULL)
            {
            printf("\t %d",p->data);
            p=p->rlink;
            }
        break;
        case 2: p=start;
            while(p->rlink!=NULL)
            {
                p=p->rlink;
            }
            while(p!=NULL)
            {
                printf("\t %d",p->data);
                p=p->llink;
            }
            break;
            default: printf("\n Invalid choice");
    }
}