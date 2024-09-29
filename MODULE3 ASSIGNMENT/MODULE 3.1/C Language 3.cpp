#include<stdio.h>
int main()
{
	float pi=3.14,area;
	int r,l,w,ar,base,height;
	//find the circale
	printf("\n find the circle ");
	printf("\nEnter the value of r = ");
	scanf("%d",&r);
	area=2*pi*r*r;
	printf("the answer is %f",area);
	
	//find the rectangle
	printf("\n find the rectangle ");
	printf("\nEnter the value of l =");
	scanf("%d",&l);
	printf("\nEnter the value of w =");
	scanf("%d",w);
	area=l*w;
	printf("\nThe answer is = %d",ar);
	
	//find the triangle
	printf("\n find the triangle ");
	printf("\nEnter the value of base = ");
	scanf("%d",&base);
	printf("\nEnter the value of height =");
	scanf("%d",&height);
	ar=(base*height)/2;
	printf("\nThe anser is %d",ar);
	return 0;
}
