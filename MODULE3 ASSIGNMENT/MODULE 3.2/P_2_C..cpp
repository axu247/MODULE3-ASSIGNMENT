//2//WAP to swap two number  without using third variable//

#include<stdio.h>
int main()
{
	//add,sub
	int a = 20,b = 40;
	printf("\nvalue of a befor swapping = %d", a);
	printf("\nvalue of a befor swapping = %d", b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nvalue of a after swapping = %d", a);
	printf("\nvalue of a after swapping = %d", b);
	printf("\n \n");
	
	//multi,division
	printf("\nvalue of a befor swapping = %d", a);
	printf("\nvalue of a befor swapping = %d", b);
	
	a = a * b;
	b = a / b;
	a = a / b;
	
	printf("\nvalue of a after swapping = %d", a);
	printf("\nvalue of a after swapping = %d", b);
	return 0;
}
