#include<stdio.h>
#include<conio.h>

main(){

 int a [] = {26,65,89,78};
 int length = sizeof(a) / sizeof(a[0]);
 int i;

clrscr();

 printf("length of size = %d\n", length);
 for(i=0;i<length;i++)
 {
 printf("%d\n",a[i]);
 }
getch();
}