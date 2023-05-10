#include<stdio.h>
#include<conio.h>
void main()
{
  int a,p,r,t;
  clrscr();
  printf("\n enter intial principal balance and time");
  scanf("%d%d",&p,&t);
  r=10.9;
  a=p*(1+r*t);
  printf("\n final amout is %d",a);

  printf("\n");
  getch();
}
