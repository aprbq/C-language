#include <stdio.h>

void read_num_of_items(int *);
void read_net_prices(float [], int);
void calculate_payment(float [], int, float *);

int main(void){
    int num;
    float sum;
    read_num_of_items(&num);
    float arr[num];
    read_net_prices(arr, num);
    calculate_payment(arr, num, &sum);
    printf("Total payment (VAT include): %.2f",sum);
    return 0;
}
void read_num_of_items(int *nump) {
    printf("Please enter the number of items: ");
    scanf("%d", nump);
}

void read_net_prices(float arrp[], int s) {
    for(int i = 0; i < s; i++) {
        printf("Please enter the net price of item %d: ",(i+1));
        scanf("%f",&arrp[i]);
    }
}

void calculate_payment(float arrq[],int s, float *sump){
    float sum1 = 0;
    for(int i = 0; i < s; i++) {
        sum1 += arrq[i];
    }
    *sump = sum1*0.11 + sum1;
}
