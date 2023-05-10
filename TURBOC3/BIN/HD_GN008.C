#include<stdio.h>
#include<conio.h>
  void main()
{
  int a,b,temp;
  clrscr();
  printf("\n enter any two number");
  scanf("%d%d",&a,&b);
  printf("\n before swaping A=%d B=%d",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("\n after swaping A=%d B=%d",a,b);
  getch();
}