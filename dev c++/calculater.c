#include<stdio.h>
int main()
{
	int num1,num2;
	char op;
	printf("enter the numper 1:");
	scanf("%d",&num1);
	printf("enter the numper 2:");
	scanf("%d",&num2);
	printf("enter the operator:");
	scanf("\n %c",&op);
	if(op =='+')
	{
		printf("sum:%d",num1+num2);
	}
	else if(op=='-')
	{
		printf("minus:%d",num1-num2);
		
	}
	else if(op=='*')
	{
		printf("multiplication:%d",num1*num2);
	}
	else if(op=='/')
	{
		printf("divison:%d",num1/num2);
	}
	else
	{
		printf("invalid");
	}
}
