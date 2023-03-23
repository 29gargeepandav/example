// WAP to find given 2 no using ternary operator

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
      printf("Enter a value of a: ");
      scanf("%d",&a);

      printf("Eneter a value of b:");
      scanf("%d",&b);

	(a>b) ?
		printf("a is max value") : printf("b is max value");
	getch();

      }