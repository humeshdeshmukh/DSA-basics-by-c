#include <stdio.h>
#define MAX 10
void insert_sort(int *a, int n);
int main()
{
    int a[MAX];
    int i;
    printf("\n enter %d element ", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n array before sorting");
    for (i = 0; i < MAX; i++)
    {
        printf("\n %d", a[i]);
    }
    insert_sort(a, MAX);
    printf("\n array after sorting");
    for (i = 0; i < MAX; i++)
    {
        printf("\n %d", a[i]);
    }
}
void insert_sort(int *a, int n)
{
    int i, j, k, index, t;
    for (i = 1; i < n; i++)
    {
        index = a[i];
        j = i;
        while ((j > 0) && (a[j - 1] > index))
        {
            t = a[j];
            a[j] = a[j - 1];
            a[j - 1] = t;
            j--;
        }
        printf("\n");
        for (k = 0; k < n; k++)
            printf("%d", a[k]);
        printf("\n");
    }
}