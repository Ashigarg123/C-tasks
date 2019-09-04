#include<stdio.h>
main()
{
	printf("What do you want to do? :\n\n1. fahrenheit to celsius\n\n2.celsius to fahrenheit\n\n3.exit");
	int choice=0;
	scanf("%d", &choice);
	float  Tf,Tc;
	switch(choice)
	{case 1:
		
		printf("Enter the temp in f");
		scanf("%d", &Tf);
		Tc=(Tf-32)*5/9;
		printf("the temp in c is %d,&Tc");
		break;
		case 2:
		
			printf("Enter the temp in c");
			scanf("%d", &Tc);
			
			Tf=9/5*Tc+32;
	
		printf("the temp in f is %d,Tf");
			break;
			case 3:
			printf("You want to exit");
			break;
			getch();
				}	
}
