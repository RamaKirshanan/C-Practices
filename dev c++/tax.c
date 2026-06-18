#include <stdio.h>

int main() {
    char vehicleCode;
    int engineCC, vehicleAge;
    int tax = 0;

    printf("Enter vehicle code: ");
    scanf(" %c", &vehicleCode);

    printf("Enter engine CC: ");
    scanf("%d", &engineCC);

    printf("Enter vehicle age: ");
    scanf("%d", &vehicleAge);

    if (vehicleCode == 't') {
        tax = 5000;
    }
    else if (vehicleCode == 'c' || vehicleCode == 'b') {

        if (engineCC < 1000) {
            tax = 1000;
        }
        else if (engineCC <= 2000) {
            tax = 2000;
        }
        else {
            tax = 3500;
        }

        if (vehicleAge >= 6 && vehicleAge <= 10) {
            tax = tax * 75 / 100;
        }
        else if (vehicleAge >= 11) {
            tax = tax * 50 / 100;
        }

        if (vehicleCode == 'b') {
            tax = tax / 2;
        }
    }
    else {
        printf("Invalid vehicle code");
        return 0;
    }

    printf("Road tax amount: Rs.%d", tax);

    return 0;
}
