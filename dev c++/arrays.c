#include<stdio.h>
int main()
{
	int i,array1[5],array2[5],sumarray[5];
	printf("enter 1st  array  elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("\nenter 2nd array elements:");
	for(i=0;i<5;i++){
		scanf("%d",&array2[i]);;
		
	}
	printf("sum of array is:");
	for(i=0;i<5;i++)
	{
		
		sumarray[i]=array1[i]+array2[i];
		printf("\n  element is %d is:%d",i,sumarray[i]);
	}
}
