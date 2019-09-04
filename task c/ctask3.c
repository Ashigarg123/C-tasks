#include<stdio.h>
int main()
{
	float math,sci,hist,sum,avg;
	printf("Enter the marks of math:\n");
	scanf("%f",&math);
	printf ("Enter the marks of sci:\n");
	scanf("%f", &sci);
	printf("Enter the marks of hist:\n");
	scanf("%f", &hist);
	sum=math+sci+hist;
	printf("\nThe sum of the marks is %f",sum);
	avg=sum/3;
	printf("\nThe average of the marks is %f",avg);
	getch();
	
	
	
	
}

