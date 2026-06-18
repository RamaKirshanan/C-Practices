#include<stdio.h>
int main()
{
	int  a,b,c ,d,e;
	
	printf("enter tamil marks:");
	scanf("%d",&a);
	printf("enter english marks:");
	scanf("%d",&b);
	printf("enter maths marks:");
	scanf("%d",&c);
	printf("enter science marks :");
	scanf("%d",&d);
	printf("enter social marks:");
	scanf("%d",&e);
	int r=a+b+c+d+e;
	printf(" total marks = %d""\n",r );
	printf("avarage :  %d""\n",r/5);
	if(a<=35 && b<=35&& c<=35 && d<=35 && e<=35)
	{
		printf("pass""\n");
	}
	else
	{
		printf("fail""\n");
	}
	printf("rama");
	
	
}
