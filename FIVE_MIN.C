// WAP to find Max. from 5 using nested if
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter number of a: ");
	scanf("%d", &a);
	printf("Enter number of b: ");
	scanf("%d", &b);
	printf("Enter number of c: ");
	scanf("%d", &c);
	printf("Enter number of d: ");
	scanf("%d", &d);
	printf("Enter number of e: ");
	scanf("%d", &e);

	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("%d is min value",a);
				}
				else
				{
					printf("%d is min number",e);
				}
			}
		}
	}
	else if(b<c)
	{
		if(b<d)
		{
			if(b<e)
			{
				printf("%d is min value",b);
			}
			else
			{
				printf("%d is min value",e);
			}
		}
	}
	else if(c<d)
	{
		if(c<e)
		{
			printf("%d is min value",c);
		}
		else
		{
			printf("%d is min value",e);
		}

	}
	else if(d<e)
	{
		printf("%d is min value", d);
	}
	else
	{
		printf("%d is min value",e);
	}
	getch();
}
