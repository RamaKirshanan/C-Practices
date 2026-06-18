#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("enter a:");

    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("* ");
        }
printf("\n");
    }
    
}