// WAP to print month name using wswitch case
#include<stdio.h>
#include<conio.h>

void main()
{
	int m;
	clrscr();
	printf("Enter your birth month :");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("\n jan");
		break;
		case 2:
			printf("\n feb");
		break;
		case 3:
			printf("\n march");
		break;
		case 4:
			printf("\n april");
		break;
		case 5:
			printf("\n may");
		break;
		case 6:
			printf("\n june");
		break;
		case 7:
			printf("\n jul");
		break;
		case 8:
			printf("\n Aug");
		break;
		case 9:
			printf("\n sep");
		break;
		case 10:
			printf("\n Oct");
		break;
		case 11:
			printf("\n Nov");
		break;
		case 12:
			printf("\n Dec");
		break;
		default:
			printf("please give proper month");
		}
		getch();
	}

