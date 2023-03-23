// WAP to print odd no from 1 to n using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,number=1;
	clrscr();
	printf("enter number: ");
	scanf("%d", &n);
	while(number<=n)
	{
		if(number%2 != 0)
		{
		printf("\n%d  odd number",number);
		}
		number++;
	}
	getch();
}