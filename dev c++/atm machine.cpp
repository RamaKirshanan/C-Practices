#include <stdio.h>

int main()
{
    int pin, choice;
    int correctPin = 1234;
    float balance = 5000, amount;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if(pin != correctPin)
    {
        printf("Wrong PIN! Access Denied.");
        return 0;
    }

    while(1)
    {
        printf("\n\n===== ATM MACHINE =====");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Your Balance = %.2f", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("Money Deposited Successfully!");
                    printf("\nNew Balance = %.2f", balance);
                }
                else
                {
                    printf("Invalid amount!");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("Invalid amount!");
                }
                else if(amount > balance)
                {
                    printf("Insufficient Balance!");
                }
                else
                {
                    balance = balance - amount;
                    printf("Please collect your cash.");
                    printf("\nRemaining Balance = %.2f", balance);
                }
                break;

            case 4:
                printf("Thank you for using ATM!");
                return 0;

            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}
