#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the 2nd number:");
	scanf("%d",&b);
	printf("enter the 3rd number:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d:big",a);
		}
		else
		{
			printf("dont konw")
		}
		}
		
		
		
	}
	else if(b>c)
	{
		if (b>a)
		{
			printf("'%d:big'",b);
		}
		
		else
		{
			printf("dont konw")
		}
		
	}
	else if(c>a)
	{
		if(c>b)
		{
			printf("'%d big:'",c);
		}
		
		else
		{
			printf("dont kniw")
		}
		
	}
	else 
	{
		printf("all are same");
	}
}
