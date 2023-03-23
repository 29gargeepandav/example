// WAP to calculate the factorial of n using while looping


#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1, n, fact=1;
clrscr();
	printf("Enter number :");
	scanf("%d", &n);

	while(i<=n)
	{
	       fact=fact*i;
	       i++;
	}

	printf("factorial of %d is = %d", n,fact);


getch();
}
