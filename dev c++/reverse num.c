#include<stdio.h>
int main()
{
	int i;
	int n;
	printf("enter the value of n:");
	scanf("%d",n);
	i=n;
	while(n>=i)
	{
		printf("%d\n",i);
		i--;
	}
}
