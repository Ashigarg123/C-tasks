#include<stdio.h>
int main()
{
float tempC;
float tempF;
printf("Enter the temperature in Celsius:\n");
scanf("%f",&tempC);
tempF = ((tempC * 9)/5) + 32;
printf("temp in fahrenheit is :%f\n",tempF);
getch();
	
}
