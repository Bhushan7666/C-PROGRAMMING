#include<stdio.h>
#include<conio.h>

main()
{
int a,b;
clrscr();
printf("ener two numbers\n");
scanf("%d\n",&a,&b);
printf("%d\n",((a!=b)||(a>=b))&&(a!=b));

printf("next prob\n");
printf("%d",((a==b&&a>b)||(a!=b)&&(a<b)));

getch();

}