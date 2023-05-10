#include<stdio.h>
#include<conio.h>
  void main()
{  int d1,d2,d3,sum,num;
    clrscr();
     printf("\n enter any three digit number");
      scanf("%d",&num);
      d1=num%10;
      num=num/10;
      d2=num%10;
      num=num/10;
      d3=num%10;
      sum=d1+d2+d3;
      printf("\n sum of digit is %d",sum);

  getch();
}