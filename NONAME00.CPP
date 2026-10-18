#include<stdio.h>
#include<conio.h>

   main(){
int temp=40;
      clrscr();
    if (temp>=40)
    {
    printf("it's very hot");
    }
    else if (temp>=25)
    {
    printf ("wather is normal");
    }
    else if (temp>=10)
    {
    printf("it's very cold");
    }
    else{
    printf ("it's freezing wather");
    }

    getch();
    }