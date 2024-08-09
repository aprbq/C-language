#include <stdio.h>
#include <math.h>

int main(void) {
    int number,sum=0;

    printf("Please enter a positive number> ");
    scanf("%d",&number);
    int i=0;
    if (number>0){
        while (i<=number) {
            sum += 3*pow(2,i);
            printf("j = %d, sum = %d\n",i,sum);        
            i++;
        }
    }
    else {
        printf("Invalid number!");
    }

    printf("Summation: %d",sum);

    return (0);
}