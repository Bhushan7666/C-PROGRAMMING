#include<stdio.h>
#include<conio.h>

main()
{
int a;
float b,c;
clrscr();

printf("ENTER a Marks\n");
scanf("%d",&a);

printf("ENTER b Marks\n");
scanf("%f",&b);
c=a+b;
printf("ADDITIONAL Value\n");
printf("%f\n",c);
getch();
}