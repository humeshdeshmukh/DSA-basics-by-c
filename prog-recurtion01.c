/*write a c program to find factorial of number using recurtion*/
#include <stdio.h>
int fact(int n)

{
    int f;
    if (n == 0)
    {
        return (1);
    }
    else
    {
        f = n * fact(n - 1);
        return (f);
    }
}
void main()
{
    int num;
    printf("\n enter numbeer");
    scanf("%d",&num);
    printf("\n factorial =%d",fact(num));
    return 0;
}
