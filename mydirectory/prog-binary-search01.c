#include <stdio.h>
#define MAX 10

void binary_search(int *a, int size);

int main()
{
    int a[MAX];
    int i;

    printf("\nEnter %d elements: ", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }

    binary_search(a, MAX);

    return 0;
}

void binary_search(int *a, int size)
{
    int item, i, flag = 0, high, low, mid;

    printf("\nEnter the element to be searched: ");
    scanf("%d", &item);
    low = 0;
    high = size - 1;
    while (low <= high) 
    {
        mid = (low + high) / 2;

        if (a[mid] == item)
        {
            printf("\nSEARCH IS SUCCESSFUL");
            printf("\nElement is present at position %d\n", mid);
            flag = 1;
            break;
        }
        else
        {
            if (a[mid] < item) 
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("\nElement not found\n");
    }
}
