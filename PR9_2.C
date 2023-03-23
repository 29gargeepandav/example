#include<stdio.h>
#include<conio.h>
sum(int a[50], int n)
{
	int i, sum=0;
	for(i=0;i<n;i++);
	{
		sum=sum+a[i];
	}
	return sum;
}
void main()
{
	int a,i,j,n;

	printf("Enter the size of array :- ");
	scanf("%d", &n);

	int a[n];

	for(i=0;i<n;i++)
	{
		printf("enetr the emelents of array [%d] :- ", i);
		scanf("%d", &a[i]);
	}
	j = sum(a,n);

	printf("the sum of all elements :- %d" ,j);
	getch();
}
