#include<stdio.h>
int main()
{
    int i, j, a[2][3], sum = 0;
    printf("Enter the array:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d\n", &a[i][j]);
        }
    }   
    printf("Array elements are:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("Sum = %d", sum);
    return 0;
}
