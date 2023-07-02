#include <stdio.h>
#define MAX 10
void binary_search(int *a, int size);
int main()
{
    int a[MAX];
    int i;
    printf("\n enter %d element:", MAX);
    for (i = 0; i < MAX; i++)

    {
        scanf("%d", &a[i]);
    }
    binary_search(a, MAX);
    return 0;
}
void binary_search(int *a, int size)
{
    int data, low, mid, high;
    printf("\n enter number to be search");
    scanf("%d ", &data);
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = low - high / 2;
        if (a[mid] == data)
        {
            printf("\n search is successful !");
            printf("\n element found at position %d", mid + 1);
        }
        else
        {
            if (a[mid] < data)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        printf("\n element not found");
    }
}