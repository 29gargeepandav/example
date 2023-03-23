// WAP to find gross salary

#include<stdio.h>

void main()
{

	   int da,hra,ta,bs,gs;
	    clrscr();
	    printf("Eneter your basic salary: ");
	    scanf("%d",&bs);

	    da=bs*5/100;
	    hra=bs*10/100;
	    ta=bs*8/100;

	    gs=bs+da+hra+ta;

	    printf("\nyour gross salary is %d",gs);
	    getch();
}