#include<stdio.h>
int main()
{
	int t;
	int vote;
	int want;
	printf("enter the total:");
	scanf("%d",&t);
	int majority = (t / 2) + 1;
	printf("enter the vote:");
	
	scanf("%d",&vote);
	if(majority<vote)
	{
		printf("0 \n");
		printf("vijay");
	}
	else 
	{
		want=majority-vote;
		printf("%d",want);
	}
}
