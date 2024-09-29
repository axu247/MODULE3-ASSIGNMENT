#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year =");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\nThis year is  leap year = %d",year);
	}
	else
	{
		printf("\nThis yers is  not leap year = %d",year);
	}
	return 0;
}
