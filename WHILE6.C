#include<stdio.h>
#include<conio.h>

void main()
{
	int n,number=100;
	clrscr();
	printf("enter number: ");
	scanf("%d", &n);

	while(number>=n)
	{
		if(number%2 == 0)
		{
		printf("\n%d even number",number);
		}
		number--;
	}
	getch();
}