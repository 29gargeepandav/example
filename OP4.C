#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("eneter a value of x:");
	scanf("%d",&x);

	printf("\neneter a value of y:");
	scanf("%d",&y);

	z=(x-y)*(x-y)*(x-y);

	printf("\n\n ans is z=> %d",z);
	getch();
}