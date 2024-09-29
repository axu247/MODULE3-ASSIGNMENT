/*
1 
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	int a = 1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}

