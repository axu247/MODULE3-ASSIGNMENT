//3_1//write a program to find out the max number from given array using function//
#include<stdio.h>
int max();
int main()
{
	int result;
	result=max();
	printf("\n Maximum Element Is:%d",result);
	return 0;
}
int max()
{
	int a[100],size,i,max;
	printf("\n Enter the size: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\n Enter the Element of a[i]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}