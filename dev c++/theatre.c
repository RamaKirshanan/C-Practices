#include<stdio.h>
int main()
{
	int age;
	int daytype;
	float price=0;
	printf("enter age:");
	scanf("%d",&age);
	printf("enter day type:");
	scanf("%d",&daytype);
	if(daytype == 0)
	{
		printf("weekday]\n");
		
	}else if(daytype == 1 )
	{
		printf("week end""\n");
	}
	else 
	{
		printf("invalid day\n");
	}
      if(age<=5)

	{
	printf("rs.0 [free ticket]\n");
}
else if(6<=age && age<=18)
{
	printf("rs.100\n");
}
else if(19<=age && age<=60)
{
	printf("rs.200\n");
}
else if(age>60 && daytype==1 )
{
	printf("rs.120");
}

else {
	printf("invalid price");
}
if(daytype==1)
{
	price=price*20/100;
}printf("ticket price rs.%f",price);



	
}
