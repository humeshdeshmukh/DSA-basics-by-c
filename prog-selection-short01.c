#include <stdio.h>
#define MAX 5
void selection_sort(int *a, int size);
int main()
{
    int arr[MAX];
    int i;
    printf("\n Enter %d element:", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n befor sorting");
    for (i = 0; i < MAX; i++)
    {
        printf("%d", arr[i]);
    }
    selection_sort(arr, MAX);
    printf("\n after sorting");
    for (i = 0; i < MAX; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
void selection_sort(int *a, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size - 1; j++)
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