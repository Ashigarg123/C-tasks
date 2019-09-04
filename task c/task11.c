#include<stdio.h>
struct book
{
char Title[20];
char author[20];
char genre[20];
};
int main()
{
	struct book b;
	printf("\nEnter the book title\n");
	scanf("%s",&b.Title);
	printf("\nEnter the book author name\n");
	scanf("%s",&b.author);
	printf("\nEnter the genre\n");
	scanf("%s",&b.genre);
	printf("\nBook details...\n");
	printf("\nBook title=%s",b.Title);
	printf("\nBook author name=%s",b.author);
	printf("\nBook genre=%s",b.genre);
	return()
	getch();
}
