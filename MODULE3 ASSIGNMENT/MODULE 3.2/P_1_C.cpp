//1//WAP to make calculator(operztion include Addition, Subtraction, Multiplication, Division,modulo)//

#include<stdio.h>
int main()
{
	int choies;
	int num1,num2;
	
	printf("\n press '+' to perform Addition");
	printf("\n press '-' to perform Subtration");
	printf("\n press '*' to perform Multipliction");
	printf("\n press '/' to perform Division");
	printf("\n press 'R' to perform remainder");
	printf("\n Enter the choies");
	scanf("%c",&choies);
	
	switch(choies)
	{
		case '+':
			printf("\n Enter the value of num1 = ");
			scanf("%d", &num1);
			printf("\n Enter the value of num2 = ");
			scanf("%d", &num2);
			printf("\n The addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case '-':
			printf("\n Enter the value of num1 = ");
			scanf("%d", &num1);
			printf("\n Enter the value of num2 = ");
			scanf("%d", &num2);
			printf("\n The Subtration of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*':
			printf("\n Enter the value of num1 = ");
			scanf("%d", &num1);
			printf("\n Enter the value of num2 = ");
			scanf("%d", &num2);
			printf("\n The Multipliction of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/':
			printf("\n Enter the value of num1 = ");
			scanf("%d", &num1);
			printf("\n Enter the value of num2 = ");
			scanf("%d", &num2);
			printf("\n the Division of %d and %d is %d",num1,num2,num1/num2);
		break;
		case 'R':
			printf("\n Enter the value of num1 = ");
			scanf("%d", &num1);
			printf("\n Enter the value of num2 = ");
			scanf("%d", &num2);
			printf("\n The Remainder or %d and %d is %d",num1,num2,num1%num2);
		break;
		default :printf("\n Invalid input");
	}
	return 0;	 
	
}

