//WAP to find max from 5 using ternary operator
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Eneter value of b:");
	scanf("%d", &b);
	printf("Eneter value of c:");
	scanf("%d",&c);
	printf("Eneter value of d:");
	scanf("%d",&d);
	printf("Enter value of e:");
	scanf("%d",&e);

	(a>b && a>c && a>d && a>e) ?
			     printf("%d is max value", a):
	(b>c && b>d && b>e) ?
			printf("%d is max value",b) :

	(c>d && c>e)?
			printf("%d is max value",c) :
	(d>e)?
			printf("%d is max value",d):
			printf("%d is max value",e);
			getch();
}
