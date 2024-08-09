#include <stdio.h>
int main(void) {
    int j = 1;
    int choice;
    double deposit,withdraw;
    double balance= 10000;
    do {
        printf("Menu:\n1 - Balance\n2 - Deposit\n3 - Withdraw\n0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if (choice == 1) {
            printf("Your available balance: %.2lf\n",balance);
            printf("---------------------------------\n");
        }
        else if (choice == 2) {
            printf("Enter the deposit amount: ");
            scanf("%lf",&deposit);
                if (deposit > 0) {
                    balance += deposit;
                }
                else {
                    printf("The minimum deposit amount must be more than zero!!!\n");
                }
                printf("---------------------------\n");
            }
        else if (choice == 3) {
            printf("Enter the withdraw amount: ");
            scanf("%lf",&withdraw);

            if (withdraw > balance ) {
                printf("Exceeds withdrawal amount limits!!!\n");
                //balance = balance - withdraw;
            }
            else if (withdraw <= 0) {
                 printf("The minimum withdraw amount must be more than zero!!!\n");
            }
            else {
                balance -= withdraw;
            }
            printf("---------------------------\n");
        }
        else if (choice == 0) {
            j = 0;
        }
        else {
            printf("Invalid choice. Please try again.\n");
            printf("---------------------------\n");
        }
    } while (j == 1);
    printf("Exiting...\n");

return (0);
}