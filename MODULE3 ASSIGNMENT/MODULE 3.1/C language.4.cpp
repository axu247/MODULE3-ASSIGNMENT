//interest

#include<stdio.h>
int main()
{
	int p,i,r;
	double se;
	printf("\nEnter the principle amount = ");
	scanf("%d", &p);
	printf("\nEnter the rate of interest = ");
	scanf("%d", &i);
	printf("\nEnter the time of investment = ");
	scanf("%d", &r);
	se = (p*i*r)/100;
	printf("\nThe simple interest is %1f",se);
	
	return 0;
}
