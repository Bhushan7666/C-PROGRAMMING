#include<stdio.h>
#include<conio.h>

main()
{

int a= 10,b=30,c;
clrscr();
printf("current value\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
c=a;
a=b;
b=c;

printf("UPDATED\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
getch();



}