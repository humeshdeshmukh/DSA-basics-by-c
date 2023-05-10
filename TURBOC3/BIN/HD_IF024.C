#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\n enter any two number");
  scanf("%d%d",&a,&b);
  if(a<b)
    {
    printf("\n a is smaller");
    }
    else
    { if(b<a)
      {
       printf("\n  b is smaller");
      }
      else
      {
      printf("\n c is smaller");
      }
    }

  printf("\n");
  getch();
}

