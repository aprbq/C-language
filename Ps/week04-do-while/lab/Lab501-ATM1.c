#include <stdio.h>
int main(void) {
    int j = 1;
    int choice;
    double deposit,withdraw;
    double balance = 10000;
    do {
        printf("Menu:\n1 - Balance\n2 - Deposit\n3 - Withdraw\n0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice ) {
            case 0:
                j = 0;
                break;
            case 1:
                printf("Your available balance: %.2lf\n",balance);
                printf("---------------------------------\n");
                break;
            case 2: 
                printf("Enter the deposit amount: ");
                scanf("%lf",&deposit);
                    if (deposit > 0) {
                        balance += deposit;
                    }
                    else {
                        printf("The minimum deposit amount must be more than zero!!!\n");
                    }
                    printf("---------------------------\n");
                break;
            case 3: 
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
                break;
            default :
            printf("Invalid choice. Please try again.\n");
            printf("---------------------------\n");
            break;
        }
    }
    while (j == 1);
    printf("Exiting...\n");

return (0);
}