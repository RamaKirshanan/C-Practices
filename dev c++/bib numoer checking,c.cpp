#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter the numper:");
	scanf("%d",&a);
	printf("enter the numper:");
	scanf("%d",&b);
	printf("enter the numper:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("a is big");
		
	}
	else if(b>a && b>c)
	{
		printf("b is big");
	}
	else if(c>a && c>b)
	{
		printf(" c is big");
	}
	else if(a == b&& b==c)
	{
		printf(" all are same ");
	}
	printf("ALL are same");
}
else
{
	printf("both same one is different");
}
}
