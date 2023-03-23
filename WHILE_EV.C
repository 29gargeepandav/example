#include<stdio.h>

void main()
{
	int i=1;
	clrscr();
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("\n%d number is even", i);
		}
		i++;
	}
	getch();
}