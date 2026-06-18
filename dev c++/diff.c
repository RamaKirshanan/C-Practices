#include<stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter num1 num2 op: ");
    scanf("%d %d %c", &num1, &num2, &op);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("op = %c\n", op);

    return 0;
}
