#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,ans;
	clrscr();

	printf("eneter a value of x:");
	scanf("%d",&x);

	printf("\neneter a value of y:");
	scanf("%d", &y);

	printf("\n eneter a value of z:");
	scanf("%d", &z);

	ans=(x-y-z)*(x-y-z)*(x-y-z);

	printf("ans = %d", ans);
	getch();
}