#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

int main()
{
    int choice = 0;

    while (1)
    {
        printf("\n\n*********Main Menu*********\n");
        printf("Choose one option from the following list ...\n");
        printf("===============================================\n");
        printf("1. Insert in the beginning\n2. Insert at last\n3. Insert at any random location\n");
        printf("4. Delete from Beginning\n5. Delete from last\n6. Delete node after specified location\n");
        printf("7. Search for an element\n8. Show\n9. Exit\n");
        printf("Enter your choice?\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..\n");
            break;
        }
    }

    return 0;
}

void beginsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        int item;
        printf("\nEnter value: ");
        scanf("%d", &item);

        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted\n");
    }
}

void lastinsert()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        int item;
        printf("\nEnter value: ");
        scanf("%d", &item);

        ptr->data = item;
        ptr->next = NULL;

        if (head == NULL)
        {
            head = ptr;
            printf("\nNode inserted\n");
        }
        else
        {
            struct node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = ptr;
            printf("\nNode inserted\n");
        }
    }
}

void randominsert()
{
    int loc;
    printf("\nEnter the location after which you want to insert: ");
    scanf("%d", &loc);

    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        int item;
        printf("\nEnter value: ");
        scanf("%d", &item);

        ptr->data = item;

        struct node *temp = head;
        for (int i = 1; i < loc; i++)
        {
            temp = temp->next;

            if (temp == NULL)
            {
                printf("\nCan't insert\n");
                return;
            }
        }

        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted\n");
    }
}


