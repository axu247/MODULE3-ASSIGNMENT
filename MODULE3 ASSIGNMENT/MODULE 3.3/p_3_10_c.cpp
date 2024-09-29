//3_10//Write a program of struccture for five employee that provides the following information -print and display empno, empname,address and age//
#include<stdio.h>
struct employe
{
	int num[100];
	int age[100];
};
int main()
{
	int i;
	char name[100],add[100];
	struct employe e[100];
	for(i=0;i<5;i++)
	{
		printf("\nEnter the employe name =");
		scanf(" %s",&name);
		printf("\nEnter the employe address =");
		scanf(" %s",&add);
		printf("\nEnter the employe number =");
		scanf("%d",&e[i].num);
		printf("\nEnter the empoye age = ");
		scanf("%d",&e[i].age);
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		printf("\nEmploye name is = %s",name);
		printf("\nEmploye number is = %d",e[i].num);
		printf("\nEmploye address is = %s",add);
		printf("\nEmploye age is %d",e[i].age);
		
		printf("\n");
	}
	
	return 0;
}
