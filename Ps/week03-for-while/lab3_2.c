#include <stdio.h>
    int main() {
    int i,j=0,number,odd=0,even=0;
    int sum_odd=0,sum_even=0;
    double avg_odd=0,avg_even=0;

    printf("Please enter a positive integer (10000 to 99999 only): ");
    scanf("%d",&number);

    if (number>=10000 && number<=99999){
        for (i=1; i<100000; i*=10){
            j = (number/(i))%10;
            if ((j%2)==0) {
                even += 1;
                sum_even += j;
            }
            else {
                odd += 1;
                sum_odd += j;
            }
        }
        if (odd>0) {
            printf("There are %d odd integers.\n",odd);
            avg_odd = (double)sum_odd/odd;
        }
        else {
            printf("There is no odd integer.\n");
            avg_odd = 0;
        }
        if (even>0) {
            printf("There are %d even integers.\n",even);
            avg_even = (double)sum_even/even;
        }
        else {
            printf("There is no even integer.\n");
            avg_even = 0;
        }
        printf("Average of odd integers: %.2lf\n",avg_odd);
        printf("Average of even integers: %.2lf\n",avg_even);
    }
    else {
    printf("Invalid input!");
    }
    return 0;
}