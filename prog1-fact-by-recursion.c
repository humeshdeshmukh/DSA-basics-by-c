#include<stdio.h>
int fact(int n)
{
    int f;
    if(n==0)
    {
        return(1);
    }
    else
    {
         f=n*(n-1);
         return(f);
    }
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("\n factorial of numer =%d",fact(num));
}