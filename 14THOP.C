#include<stdio.h>
#include<conio.h>

main()
{
int a,b;


clrscr();
printf("ENTER ANY TWO NO\n");
scanf("%d",&a);
scanf("%d",&b);

printf("%d\n",((a<b)&&(a>b)||a<b));
printf("%d\n",(!(a==b)&&(a!=b))||a==b);
printf("%d",((a==b)||(!(a>b))));
printf("%d",((a==b)&&a<=b)||(a!=b)&&(a<=b));

getch();

}