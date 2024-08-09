#include <stdio.h>
int main (void) {
    int i,j,number,max_odd=0,max_even=0,sum_odd=0,sum_even=0,odd=0,even=0;
    int min_even=9,min_odd=9;
    printf("Please enter a positive integer (111111 to 999999 only): ");
    scanf("%d",&number);

    if (number>=111111 && number<=999999) {
        for (i=1; i<1000000; i*=10) {
            j = (number/i)%10;
            //printf("J = %d\n",j);
         if (j%2 == 0) {
                even += 1;
                sum_even += j;
                if (j>max_even) {
                    max_even = j;
                }
                else if (j==max_even) {
                    max_even = j;
                }
                if (j<min_even) {
                    min_even = j;
                }
                else if (j==min_even) {
                    min_even = j;
                }
            }
            else {
                odd += 1;
                sum_odd += j;
                if (j>max_odd) {
                    max_odd = j;
                }
                else if (j==max_odd) {
                    max_odd = j;
                }
                if (j<min_odd) {
                    min_odd = j;
                }
                else if (j==min_odd) {
                    min_odd = j;
                }
            }
        }
    if (odd>0) {
        printf("There are %d odd integers.\n",odd);
        printf("Max of odd integers: %d\n",max_odd);
        printf("Min of odd integers: %d\n",min_odd);
        printf("Sum of odd integers: %d\n",sum_odd);
    } else {
        printf("There is no odd integer.\n");
    }
    if (even>0) {
        printf("There are %d even integers.\n",even);
        printf("Max of even integers: %d\n",max_even);
        printf("Min of even integers: %d\n",min_even);
        printf("Sum of even integers: %d",sum_even);
    } else {
        printf("There is no even integer.");
    }
    }
    else {
        printf("Invalid input!");
    }
    
    return 0;
}
