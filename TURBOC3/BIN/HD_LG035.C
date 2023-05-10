#include<stdio.h>
#include<conio.h>
  void main()
{  int m1,m2,m3,m4,m5,total;
   float percentage;
   clrscr();
   printf("\n enter marks of five subject");
   scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
   if(m1<=40&&m2<=40&&m3<=40&&m4<=40&&m5<=40)

       {
       printf("\n student is fail");
       }
       else
       {
	{
	printf("\n student is pass");
	}
       total=m1+m2+m3+m4+m5;
       percentage=(total/5.0);
       printf("\n total is %d",total);
       printf("\n percentage %.2f",percentage);
     }



   printf("\n ");
   getch();
}