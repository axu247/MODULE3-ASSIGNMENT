//3_6//WAP to make addition Subtraction and multiplication of two matrix using 2-D Array//
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],ans[100][100],mul[100][100];
	int i,j,k,row,col;
	char ch;
	printf("\nEnter the count of rows = ");
	scanf("%d",&row);
	printf("\nEnter the count of cols = ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray a := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n'+'---> Addition");
	printf("\n'-'---> Subtraction");
	printf("\n'*'---> Multiplication");
	printf("\nEnter the choice = ");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nAnswar of addition is :\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
			break;
			case '-':
				for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						ans[i][j] = a[i][j] - b[i][j];
					}
				}
				printf("\nAnswar of Subtraction is :=\n");
				for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						printf("%d ",ans[i][j]);
					}
					printf("\n");
				}
			break;
			case '*':
				for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						mul[i][j] = 0;
						for(k=0;k<col;k++)
						{
							mul[i][j] = mul[i][j] + (a[i][k]*b[k][j]);
						}
					}
				}
				printf("\nAnswar of multiplication is :=\n");
				for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						printf("%d ",mul[i][j]);
					}
					printf("\n");
				}
		break;
	}
	return 0;
}
