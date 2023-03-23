#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    if(n<=1)
    {
	return 1;
    }
    else
    {
	return n*fact(n-1);
    }
}
void main()
{
	int ans, a;
	printf("\nenter number:");
	scanf("%d",&a);
	ans=fact(a);
	printf("Factorial of n number is %d", ans);

}
