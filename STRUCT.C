#include<stdio.h>
#include<conio.h>
struct stud
{
	int id;
	char name[100];
	int age;
}s[100];

void main()
{
       int n,i;
       clrscr();
       printf("enter no of students:\n");
       scanf("%d", &n);

       for(i=0;i<n;i++)
       {
	printf("\nEnter id: ");
	scanf("%d", &s[i].id);

	printf("\nEnetr name: ");
	scanf("%s",&s[i].name);

	printf("\nEnetr age: ");
	scanf("%d",&s[i].age);
	}
	for(i=0;i<n;i++)
	{
	printf("\nID=>%d\nName=>%s\nAge=>%d", s[i].id,s[i].name,s[i].age);
	}
       getch();
}

