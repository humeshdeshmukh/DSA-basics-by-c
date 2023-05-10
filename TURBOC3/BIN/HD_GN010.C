#include<stdio.h>
#include<conio.h>
  void main()
{
  int bytes,bits,kb,mb,gb;
  clrscr();
  printf("\n enter any number in bytes");
  scanf("%d",&bytes);
  bits=bytes*8;
  kb=bytes/1024;
  mb=kb/1024;
  gb=mb/1024;
  printf("\n equivalent bits:%d",bits);
   printf("\n equivalent kb:%d",kb);
    printf("\n equivalent mb:%d",mb);
     printf("\n equivalent gb:%d",gb);
  getch();
}