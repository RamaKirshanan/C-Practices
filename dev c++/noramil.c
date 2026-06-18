#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=10;i>=1;i=i-2)
	{
		printf("%d \n",i);
		sum=sum+i;
	}printf("sum=%d",sum);
}
