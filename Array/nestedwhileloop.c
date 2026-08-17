#include<stdio.h>

int main()
{
    int i=1, j=1, a, b;

    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    while(i<=a)
    {
        

        while(j<=b)
        {
            printf("* ");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}