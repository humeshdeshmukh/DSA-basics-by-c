#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  clrscr();
  printf("\n enter any number to check een or odd");
  scanf("%d",&num);
  if(num%2==0)
  {
  printf("\n  number is even ") ;
  }
  else
  {
  printf("\n number is odd");
  }
  printf("\n");
  getch();
}
