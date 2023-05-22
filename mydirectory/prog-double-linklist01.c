#include<stdio.h>
#include<stdlib.h>

struct dnode {
    struct dnode *llink;
    int data;
    struct dnode *rlink;
};

void insert_dll();
void delete_dll();
void display_dll();

struct dnode *start = NULL;

int main() {
    int ch;
    while (1) {
        printf("\n1. Insert element in doubly linked list");
        printf("\n2. Delete element from doubly linked list");
        printf("\n3. Display doubly linked list");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                insert_dll();
                break;
            case 2:
                delete_dll();
                break;
            case 3:
                display_dll();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice\n");
        }
    }
}

void insert_dll() {
    struct dnode *p = (struct dnode *)malloc(sizeof(struct dnode));
    printf("\nEnter data: ");
    scanf("%d", &p->data);
    
    if (start == NULL) {
        p->rlink = NULL;
        p->llink = NULL;
        start = p;
    } else {
        p->llink = NULL;
        p->rlink = start;
        start->llink = p;
        start = p;
    }
}

void delete_dll() {
    if (start == NULL) {
        printf("\nDoubly linked list is empty\n");
        return;
    }
    
    int key;
    printf("\nEnter the data to delete: ");
    scanf("%d", &key);
    
    struct dnode *temp = start;
    
    // Deleting the first node
    if (temp->data == key) {
        start = temp->rlink;
        if (start != NULL) {
            start->llink = NULL;
        }
        free(temp);
        printf("\nNode with data %d deleted successfully\n", key);
        return;
    }
    
    while (temp != NULL) {
        if (temp->data == key) {
            if (temp->rlink != NULL) {
                temp->rlink->llink = temp->llink;
            }
            if (temp->llink != NULL) {
                temp->llink->rlink = temp->rlink;
            }
            free(temp);
            printf("\nNode with data %d deleted successfully\n", key);
            return;
        }
        temp = temp->rlink;
    }
    
    printf("\nNode with data %d not found\n", key);
}

void display_dll() {
    if (start == NULL) {
        printf("\nDoubly linked list is empty\n");
        return;
    }
    
    struct dnode *temp = start;
    printf("\nDoubly linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->rlink;
    }
    printf("\n");
}
