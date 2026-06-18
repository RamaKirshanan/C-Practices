#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%100 == 0)
	{
		if(year%400 ==0)
		{
			printf("this is the leap year");
			
	}
		else
		{
			printf ("this is not leap year");
		}}
		else{
			
			if(year%4 ==0)
			
			{
				printf("this is leap year");
			}
			else("not leap");
		}}
	
