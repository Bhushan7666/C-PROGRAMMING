#include<stdio.h>
#include<conio.h>

main()
{      int day;
clrscr();
printf("hi\n enter number 1 to 3\n");
scanf("%d",&day);

switch(day){

case 1: printf("1st jan 2027\n");
break;
case 2: printf("2nd jan 2027\n");
break;
case 3: printf("3rd jan 2027\n");
break;
default: printf("invalid day");



}
getch();

}