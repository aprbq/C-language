#include <stdio.h>
int main () {
    int k=0,i,j,side,status;
    char ch;
    do {
        printf("Enter a number: ");
        status = scanf("%d",&side);

        if (status != 1) {
            scanf("%c",&ch);
            printf("%c is an invalid input.\n",ch);
        }
        if (status==1) {
            if ((side%2 == 0 || side <5)) {
                printf("The side lenght must be an odd number with at least 5.\n");
            }
            else {
                for (i=1; i<=side; i++) {
                    for (j=1; j<=side; j++) {
                        if (j==1 || j==side || i==1 || i==side || i==((side/2)+1) || j==((side/2)+1)) {
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                    k=1;
                }
            } 
        }
        
    } while (k==0);
    return 0;
}