#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter Three number : ");
	scanf("%d%d%d", &a, &b, &c);

	if(a>b)
	{
		if(a>c)
		{
			printf("a is max value");
		}
		else
		{
			printf("c id max value");
		}
	}
	else
	{
		if(b>c)
		{
		printf("b is max");
		}
		else
		{
		printf(" c is max");
	}
	}
	getch();
}