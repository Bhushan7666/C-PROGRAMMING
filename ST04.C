#include<stdio.h>
#include<conio.h>
main()
{
int a=10,b=20;
clrscr();
(a!=b)?printf("positive\t"):printf("negative\n");
(a==b)?printf("pass=%d",a):printf("fail=%d",b);
getch();
}