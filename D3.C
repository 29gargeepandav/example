//WAP to printf 1 to N using do while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=1;
	clrscr();
	printf("\n Enter number : ");
	scanf("%d", &n);
	do
	{
	printf("\n%d", i);
	i++;
	}while(i<=n);
	getch();
}