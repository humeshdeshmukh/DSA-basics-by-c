#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\n enter any three number");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {if(a>c)
    {
    printf("\n %d is greater",a);
    }
    else
      {
       printf("\n  %d is grater",c);
      }
  }
      else
      {
	if(b>c)
	{
	printf("\n %d is greater",b);
	}
	else
	{
	printf("\n %d is greater ",c);
	}
      }

  printf("\n");
  getch();
}

