#include <stdio.h>
int main () {
    int i,number,sum=1;
    printf("Please enter a positive number> ");
    scanf("%d",&number);

    for (i=1; i<=number; i++) {
        printf("%d\n", i);
        sum *= i;
    }
    printf("Factorial of %d (%d!): %d\n",number,number,sum);

    return 0;
}