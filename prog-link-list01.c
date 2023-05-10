#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *link;

} *p, *q, *r, *start;
int main()
{
    p = (struct node *)malloc (sizeof(struct node));
    q = (struct node *)malloc (sizeof(struct node));
    r = (struct node *)malloc (sizeof(struct node));
    p->data = 10;
    q->data = 15;
    r->data = 20;
    p->link = q;
    q->link = r;
    r->link = NULL;
    start = p;
printf("%d\t", p->data = 10);
printf("%d\t",q->data = 15);
printf("%d\t",r->data = 20);
printf("%d\t",r->data = 20);
printf("%d\t",r->data = 20);
printf("%d\t",r->data = 20);

}
