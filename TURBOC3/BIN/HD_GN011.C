#include<stdio.h>
#include<conio.h>
  void main()
{
  int mm,cm,inch,feet;
  clrscr();
  printf("\n enter any number in cm");
  scanf("%d",&cm);
   mm=cm*10;
   inch=cm/2.54;
   feet=inch/12;
  printf("\n equivalent cm:%d",cm);
   printf("\n equivalent mm:%d",mm);
    printf("\n equivalent inch:%d",inch);
     printf("\n equivalent feet:%d",feet);
  getch();
}