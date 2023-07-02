#include <stdio.h>
#define MAX 5
void bubble_sort(int *p, int size);
int main()
{
    int i;
    int arr[MAX];
    printf("\n enter %d element ", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n array before sorting");
    for (i = 0; i < MAX; i++)
    {
        printf("\n %d", arr[i]);
    }
    bubble_sort(arr, MAX);
    printf("\n array after sorting");
    for (i = 0; i < MAX; i++)
    {
        printf("\n %d", arr[i]);
    }
}
void bubble_sort()
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-1,j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}