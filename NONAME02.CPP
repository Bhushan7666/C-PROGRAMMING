#include<stdio.h>
#include<conio.h>
 main(){
 char zomato,b,o;
 clrscr();
       printf("enter z to cheack app open zomato\n enter b to cheack briyani is avalible \n enter o to cheack order is avalible");
     scanf ("%c\n%c\n%c",&zomato,&b,&o);
     if (zomato=='z'){
	printf ("avalible zomato\n");
      if(b=='b') {
	printf("biryani is avalible\n ");
	if (o=='o')  {
	printf("order is conferm \n");
	}
	else{
	printf("oder is cancel ");
	}
	}
	else{
	printf("biryani is not avalible");
	}
	}
     else {
     printf ("site is error");
     }
     getch();
     }
