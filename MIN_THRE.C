//WAP to find min. from 3 using nested if
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter number of a: ");
	scanf("%d", &a);
	printf("Enter number of b: ");
	scanf("%d", &b);
	printf("Enter number of c: ");
	scanf("%d", &c);


	if(a<b)
	{
		if(a<c)
		{
			printf("a is min value");
		}
		else
		{
			printf("c is min number");
		}

	}
	else if(b<c)
	{
			printf("b id min value");
	}
		else
		{
			printf("c is min value");
		}

	getch();
}
