#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\n enter any three number");
  scanf("%d%d%d",&a,&b,&c);
  if(a<b)
  {if(a<c)
    {
    printf("\n %d is SMALLER",a);
    }
    else
      {
       printf("\n  %d is SMALLER",c);
      }
  }
      else
      {
	if(b<c)
	{
	printf("\n %d is SMALLER",b);
	}
	else
	{
	printf("\n %d is SMALLER",c);
	}
      }

  printf("\n");
  getch();
}

