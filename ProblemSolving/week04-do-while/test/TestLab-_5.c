#include <stdio.h>
int main(void) {
    int i,number,sum=0;

    printf("Please enter a positive number> ");
    scanf("%d",&number);

   for (i=1; i<number; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d\n", i);
            sum += i;
        }
    }
    printf("Summation: %d\n", sum);

    return 0;
}