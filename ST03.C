#include<stdio.h>
#include<conio.h>
main()
{
int a=10;
clrscr();
printf("preincriment=%d\n",++a);
printf("predecrment=%d\n",--a);
printf("postincriment=%d\n",a++);

printf("postdecriment=%d\n",a--);

printf("preincriment=%d\n",a);
++a;
printf("predecriment=%d\n",a);
--a;
printf("postincrement=%d\n",a);
a++;
printf("postdecrement=%d\n",a);
a--;
getch();
}