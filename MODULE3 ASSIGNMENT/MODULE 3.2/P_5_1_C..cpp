//5_1//WAP to print 972 to 897 using for loop//
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\n Enter the start value =");
	scanf("%d",&start);
	printf("\n Enter the end value =");
	scanf("%d",&end);
	
	for(i=start;i>=end;i--)
	{
		printf("\n%d",i);
	}
	return 0;
}
