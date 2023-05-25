#include <stdio.h>
#define MAX 10

void selection_sort(int *a, int size);

int main()
{
    int arr[MAX];
    int i;

    printf("\nEnter %d elements: ", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("\t%d", arr[i]);
    }

    selection_sort(arr, MAX);

    printf("\nArray after sorting:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("\t%d", arr[i]);
    }

    return 0;
}

void selection_sort(int *a, int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
