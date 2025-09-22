#include <stdio.h>

int main() {
    int choice;
    float balance = 0, amount;

    do {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Inquiry\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited. New Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient Balance!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal Successful. New Balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
