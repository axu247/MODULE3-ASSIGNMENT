/*
        *
      * * *
    * * * * * 
  * * * * * * *
* * * * * * * * *
*/
#include<stdio.h>
int main()
{
	int n,i,k,j;
	printf("Enter no. of lines : ");
	scanf("%d",&n);
	int nst = 1;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=nst;j++)
		{
			printf("*");
		}
		nst = nst + 2;
		printf("\n");
	}
	return 0;
}
