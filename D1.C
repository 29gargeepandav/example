//WAP to printf 1 to 10 using do while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n=1;
	clrscr();
	do
	{
	printf("\n%d", n);
	n++;
	}while(n<=10);
	getch();
}