#include<stdio.h>
int main()
{
	int num1,num2;
	char op;
	printf("enter the number 1:");
	scanf("%d",&num1);
	printf("enter the number 2:");
	scanf("%d",&num2);
	printf("enter the operator:");
	scanf("\n %c",&op);
	switch(op)
	{
		case  '+':
			printf("%d",num1+num2);
			break;
			
		case '-':
		printf("%d",num1-num2);
		break;
		case'*':
		printf("%d",num1*num2);
		break;
		case'/':
		printf("%d",num1/num2);
		break;
		defalut:
			printf("invalid");
			
	}
}
