#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){


	char one[10],two[10];
	int cmp;
	printf("Enter a String");
	scanf("%s", one);
	strcpy(two,one);
	strrev(one);
	cmp=strcmp(one,two);
	if(cmp==0)
	{
		printf("Entered String is a palindrome");
		
	}
	else{
		printf("Entered string is not a palindrome");
	}
	getch();
}
	
