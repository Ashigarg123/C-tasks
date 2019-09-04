#include<stdio.h>
int main()
{
	int i,n,r,s=0;
	printf("Enter the number:");
	scanf("%d", &n);
	for(i=n;i>0;)
	{
		r=i%10;
		s=s*10+r;
		i=i/10;
		
	}
	printf("\n The reverse number of  %d is %d",n,s);
	getch();
}
