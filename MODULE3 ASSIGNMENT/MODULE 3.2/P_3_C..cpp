//3//WAP to find number  is even  of old using ternary operator//

#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter the value of number :");
	scanf("%d",&num);
	(num%2==0) ? printf("\n %d number is evan number",num) : printf("\n %d number is odd number",num);
	
	return 0;
}
