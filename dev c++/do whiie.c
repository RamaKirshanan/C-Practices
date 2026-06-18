#include<stdio.h>
int main()
{
	int n,i=2,fact=1;
	printf("enter te value of n:");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;
		
	}
	while(i<=n);
	
	
	printf("%d",fact);
}
