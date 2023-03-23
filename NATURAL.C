// WAP to find if a given no is natural or not
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("Enter any number: ");
	scanf("%d", &n);

	if(n>0)
	{
		printf("given number is natural");
	}
	else
	{
		printf("given number is not natural");
	}
	getch();
}