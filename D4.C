//WAP to printf N to 1 using do while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=1;
	clrscr();
	printf("\n Enter number : ");
	scanf("%d", &n);
	i=n;
	do
	{
	printf("\n%d", i);
	i--;
	}while(i>=1);
	getch();
}