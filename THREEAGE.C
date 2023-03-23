#include<stdio.h>

void main()
{
	int a,b,c;
	clrscr();

	printf("Enetr a value of a:");
	scanf("%d", &a);

	printf("Enter a value of b:");
	scanf("%d",&b);

	printf("Enetr a value of c:");
	scanf("%d", &c);

	if(a>b)
	{
		if(b>c)
		{
			printf("a is max");
		}
		else
		{
			printf("c is max");
		}
	}
	else
	{
		if(b>c)
		{
			printf(" b is max");
		}
		else
		{
			printf(" c is max");
		}
	}
	getch();
}