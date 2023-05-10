#include<stdio.h>
#include<conio.h>
  void main()
{  int d1,d2,d3,d4,d5,sum,num;
    clrscr();
     printf("\n enter any five digit number");
      scanf("%d",&num);
      d1=num%10;
      num=num/10;
      d2=num%10;
      num=num/10;
      d3=num%10;
      num=num/10;
      d4=num%10;
      num=num/10;
      d5=num%10;
      sum=d1+d2+d3+d4+d5;
      printf("\n sum of digit is %d",sum);

  getch();
}