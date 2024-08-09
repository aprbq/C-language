#include <stdio.h>

int main(void) {
    int weight_kg, weight_g, price = 0;

    printf("Please enter a weight (kg)> ");
    scanf("%d",&weight_kg);

    weight_g = weight_kg*1000;
    printf("weight: %d\n",weight_g);

    if (weight_g>=0 && weight_g<=2000) {
        if (weight_g>1000) {
            price = 58;
        }
        else if (weight_g>500) {
            price = 48;
        }
        else if (weight_g>250) {
            price = 38;
        }
        else if (weight_g>100) {
            price = 28;
        }
        else  {
            price = 18;
        }
        if (price != 0) {
            printf("price = %d", price);
        }
        // ternary 
        //price != 0 ? printf("price = %d", price) : printf("");
    }
    else {
        printf("Invalid weight!");
    }
    return (0);
}
