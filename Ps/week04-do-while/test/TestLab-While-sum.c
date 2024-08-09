#include <stdio.h>
#include <math.h>
int main(void) {

    int i=0,n,sum=0;

    printf("Please enter a positive number> ");
    scanf("%d",&n);

    while (i<=n) {
        sum += 3*pow(2,i);
        i++;
    }
    printf("Summation: %d\n", sum);

    return 0;
}