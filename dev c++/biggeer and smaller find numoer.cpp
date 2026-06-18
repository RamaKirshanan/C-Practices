#include<stdio.h>
int main()
{
	int a;
	
	printf("enter the 1st numper:");
	scanf("%d",&a);
	int  b;
	printf("enter the 2nd numper:");
	scanf("%d",&b);
	if(a>b)
	{
		printf( "%d:biggest",a);
	}
	else if(a==b)
	{
		printf("both are same");
	}
	else
	{
		printf("%d:biggest",b);
	}
}
