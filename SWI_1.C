// WAP to create telecom call service conversion scenario using nested switch case

#include<stdio.h>
#include<conio.h>

void main()
{
	int num,num2,num3;
	char choice;
	clrscr();
	printf("\n\nPress 1 for English");
	printf("\nPress 2 for hindi");
	printf("\nPress 3 for gujarti");
	printf("\nSelect your language:");
	scanf("%d", &num2);
	switch(num2)
	{
		case 1:
		{
			printf("\n\nPress 1 for recharge");
			printf("\nPress 2 for network");
			printf("\nSelect your service:");
			scanf("%d", &num3);
			switch(num3)
			{
				case 1:
					printf("\n\nRecharge is done");
				break;
				case 2:
					printf("\nNetwork issue is solve");
				break;
				default:
					printf("\nInvalid choice");
				break;
			}
			break;
		}
		case 2:
		{
			printf("\n\nRecharge ke liye 1 dabaiye");
			printf("\nNetwork issue ke liye 2 dabaiye");
			printf("\nSelect your service:");
			scanf("%d", &num3);
			switch(num3)
			{
				case 1:
					printf("\n\nAapka Recharge ho gaya he");
				break;
				case 2:
					printf("\nNetwork issue solve ho gaya he");
				break;
				default:
					printf("\nApne galat option select kiya he");
				break;
			}
			break;
		}
		case 3:
		{
			printf("\n\nRecharge mate 1 dabavo");
			printf("\nNetwork issue mate 2 dabavo");
			printf("\nSelect your service:");
			scanf("%d", &num3);
			switch(num3)
			{
				case 1:
					printf("\n\nTamaru Recharge thai gayu chhe.");
				break;
				case 2:
					printf("\nNetwork issue solve thai gayo chhe.");
				break;
				default:
					printf("\nTame khoto vikalp pasand karyo chhe.");
				break;
			}
			break;
		}
		default:
			printf("\nInvalid Choice");
		break;
		}
	getch();
}
