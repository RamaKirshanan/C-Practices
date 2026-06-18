#include<stdio.h>
int main()
//kiii
{
    int i,a,sum=0;
    for(i=0;i<5;i++)
    {
        printf("enter a:");
        scanf("%d",&a);
        if(a<0)
        {break;
        }sum=sum+a;
    }printf("sum=%d",sum);
}