#include<stdio.h>
#include<conio.h>

main()
{
int a;
char b,c;
clrscr();

printf("ENTER a Marks\n");
scanf("%d",&a);

printf("ENTER b Marks\n");
scanf("%c",&b);
c=a+b;
printf("ADDITIONAL Value\n");
printf("%c\n",c);

getch();
}