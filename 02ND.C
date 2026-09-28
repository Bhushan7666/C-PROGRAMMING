#include<stdio.h>
#include<conio.h>

main()
{

int a= 10,b=30;
clrscr();
printf("current value\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
a=a+b;
b=a-b;
a=a-b;

printf("UPDATED\n");
printf("a=%d\n",a);
printf("b=%d\n",b);

getch();
 }