//5_3//How many Even numbers are there//
#include<stdio.h>
int main()
{
	int num1,i,counte=0;
	printf("\nEnter the value of name1 = ");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("\n%d",i);
		if(i%2==0)
		{
			counte ++;
		}
	}
	printf("\ncount of even number = %d",counte);
	
	return 0;
}
