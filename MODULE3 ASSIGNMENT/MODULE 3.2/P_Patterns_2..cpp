/*
A
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
int main()
{
	int row,i,j;
	char temp='A';
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",temp++);
		}
		printf("\n");
	}
	return 0;
}
