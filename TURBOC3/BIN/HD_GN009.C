#include<stdio.h>
#include<conio.h>
  void main()
{
  int a,b;
  clrscr();
  printf("\n enter any two number");
  scanf("%d%d",&a,&b);
  printf("\n before swaping A=%d B=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n after swaping A=%d B=%d",a,b);
  getch();
}