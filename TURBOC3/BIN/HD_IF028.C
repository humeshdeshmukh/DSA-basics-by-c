#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,e,max;
  clrscr();
  printf("\n enter any five number");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  max=a;
  if(a>max)
  if(b>max){max=b;}
  if(c>max){max=c;}
  if(d>max){max=d;}
  if(e>max){max=e;}
  printf("\n %d is max",max);

  printf("\n");
  getch();
}

