/*create a function deletefirst() to delete the node from the first position*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node *link;
} *start, *p, *q;

void deletfirst();
void display();

int main() {
    int choice;
    start = NULL;

    while (1) {
        printf("\n 1. delete first in linked list:");
        printf("\n 2. display linked list:");
        printf("\n 3. exit");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            deletfirst();
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

void deletfirst() {
    if (start == NULL) {
        printf("\n empty linked list");
    } else {
        p = start;
        start = p->link;
        printf("\n deleted item=%d", p->item);
        free(p);
    }
}

void display() {
    if (start == NULL) {
        printf("\n empty linked list");
    } else {
        p = start;
        while (p != NULL) {
            printf("\t %d", p->item);
            p = p->link;
        }
    }
}
