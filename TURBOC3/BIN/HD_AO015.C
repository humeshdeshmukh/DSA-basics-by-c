#include<stdio.h>
#include<conio.h>
  void main()
{  int d1,d2,d3,rev,num;
    clrscr();
     printf("\n enter any five digit number");
      scanf("%d",&num);
      d1=num%10;
      num=num/10;
      d2=num%10;
      num=num/10;
      d3=num%10;
      rev=d1*100+d2*10+d3*1;
      printf("\n sum of digit is %d",rev);

  getch();
}