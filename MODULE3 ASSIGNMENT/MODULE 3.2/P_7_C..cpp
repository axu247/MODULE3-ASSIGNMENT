//7//WAP to print Fibonacci series up to given number
#include<stdio.h>
int main()
{
	int num1=0,num2=1,num3,terms,i;
	printf("\nEnter the number of terns = ");
	scanf("%d",&terms);
	
	printf("\nFibonacci series = %d\t%d\t",num1,num2);
	
	for(i=1;i<=terms-2;i++)
	{
		num3 = num1 + num2;
		printf("%d\t",num3);
		num1 = num2;
		num2 = num3;
	}
	return 0;
}
