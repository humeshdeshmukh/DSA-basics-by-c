#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\n enter any two number");
  scanf("%d%d",&a,&b);
  if(a>b)
    {
    printf("\n a is greater");
    }
    else
    { if(b>a)
      {
       printf("\n  b is greater");
      }
      else
      {
      printf("\n c is greater");
      }
    }

  printf("\n");
  getch();
}

