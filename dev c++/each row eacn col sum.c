#include<stdio.h>

int main()
{
    int a[3][3], i, j,sumrow,sumcol;

    printf("Enter matrix elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
        
    }for(i=0; i<3; i++)
    {
    	sumrow=sumcol=0;
        for(j=0; j<3; j++)
        {
            sumrow=sumrow+a[i][j];
            sumcol=sumcol+a[j][i];
            printf("Row %d Sum = %d\n", i+1, sumrow);
        printf("Column %d Sum = %d\n", i+1, sumcol);
        }
        printf("\n");
    }

    return 0;
}
