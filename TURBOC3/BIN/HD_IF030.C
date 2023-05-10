#include<stdio.h>
#include<conio.h>
void main()
{
  int yr;
  clrscr();
  printf("\n enter any year");
  scanf("%d",&yr);
  if(yr%100==0)
  {if(yr%400==0)
    {
    printf("\n %d is leap year",yr);
    }
    else
      {
       printf("\n  %d is not a leap year ",yr);
      }
  }
      else
      {
	if(yr%4==0)
	{
	printf("\n %d is  leap year",yr);
	}
	else
	{
	printf("\n %d is not leap  ",yr);
	}
      }

  printf("\n");
  getch();
}

