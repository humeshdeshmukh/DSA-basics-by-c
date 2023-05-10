#include<stdio.h>
#include<conio.h>
void main()
{
  int d1,d2,d3;
  clrscr();
  printf("\n enter any three number");
  scanf("%d%d%d",&d1,&d2,&d3);
  if(d1>d2)
  {if(d1>d3)
    {
    printf("\n %d is greater",d1);
    }
    else
      {
       printf("\n  %d is grater",d3);
      }
  }
      else
      {
	if(d2>d3)
	{
	printf("\n %d is greater",d2);
	}
	else
	{
	printf("\n %d is greater ",d3);
	}
      }

  printf("\n");
  getch();
}

