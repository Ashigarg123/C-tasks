#include<stdio.h>
int main()
{
	char firstname[20];
	char lastname[20];
	printf("Enter your first name:\n");
	scanf("%s",&firstname);
	printf("Enter your last name:\n");
	scanf("%s",&lastname);
	printf("\tYour full name is :%s%s\t",firstname,lastname);
	getch();
	
	
}
