//WAP to printf 10 to 1 using do while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n=10;
	clrscr();
	do
	{
	printf("\n%d", n);
	n--;
	}while(n>=1);
	getch();
}