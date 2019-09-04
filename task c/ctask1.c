#include<stdio.h>
int main()
{
char name [30];
char age [20];
char mob [20];
printf ("Enter your first name, age, phone:\n");
scanf("%s %s %s",&name, &age, &mob);
printf("\nYour name is: %s\n",name);
printf ("Your age is: %s\n",age);
printf("your mobile number is: %s\n",mob);

getch();
}

