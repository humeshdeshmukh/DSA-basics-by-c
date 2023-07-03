#include <stdio.h>
#define MAX 10
void linear_search(int *a, int size);

int main()
{
    int a[MAX];
    int i;
    printf("\n enter %d element", MAX);
    for (i = 0; i < MAX; i++)

    {
        scanf("%d", &a[i]);
    }
    linear_search(a, MAX);
    return 0;
}
void linear_search(int *a, int size)
{
    int item, i, flag = 0;
    printf("\n enter the number to be search");
    scanf("%d", &item);
    for (i = 0; i < size; i++)
    {
        if (a[i] == item)
        {
            printf("\n search is successfully");
            printf("\n element fount at position %d", i + 1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\n element not found");
    }
}