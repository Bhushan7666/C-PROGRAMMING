#include<stdio.h>
#include<conio.h>

main()
{
 int MARKS;


clrscr();

printf("eNTER YOUR MARKS");
scanf("%d",& MARKS);

if(18<MARKS){
printf("PASS\n");

printf("YOUR MARKS is greter than 18  %d\n");

}

else if(60>MARKS>18)
{
printf("CC DREAD\n");
}

else{
printf("MARKS is greter than 60 YOUR GREAD IS BB %d\n");
}
printf(" we using only if.elseif .else ") ;

getch();

}

