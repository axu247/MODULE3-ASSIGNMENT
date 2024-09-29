//4.1//WAP to  Monday to Sunday using switch case//

#include<stdio.h>
int main()
{
	int week;
	printf("\nPress 1 to show day");
	printf("\nPress 2 to show day");
	printf("\nPress 3 to show day");
	printf("\nPress 4 to show day");
	printf("\nPress 5 to show day");
	printf("\nPress 6 to show day");
	printf("\nPress 7 to show day");
	printf("\nEnter the choice ");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
			printf("\n Today is monday");
		break;
		case 2:
			printf("\n Today is tuesday");
		break;
		case 3:
			printf("\n today is wednesday");
		break;
		case 4:
			printf("\n today is Thursday");
		break;
		case 5:
			printf("\n today is friday");
		break;
		case 6:
			printf("\n today is Satusday");
		break;
		case 7:
			printf("\n today is Sunday");
		break;
		default : printf("\nInvaild input");
	}
	return 0;
}
