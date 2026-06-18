#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	
		printf("%d*%d=%d\n",n,i,i*n);		
	}
}
