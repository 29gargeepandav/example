//WAP to find max. from 3 using 3 ternary operator
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Eneter value of b:");
	scanf("%d", &b);
	printf("Eneter value of c:");
	scanf("%d",&c);

	(a>b)?
		((a>c)?printf("%d is max value",a):printf("%d is max value",c))
	:((b>c)?printf("%d is max value",b):printf("%d is max value",c));
		getch();
}

