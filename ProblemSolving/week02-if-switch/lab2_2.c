#include <stdio.h>

int main() {
    int chest_measurement;
    
    printf("Measure under the arms around the widest part of your chest.\n");
    printf("Please enter your chest measurement in inches: ");
    scanf("%d", &chest_measurement);
    
    if (chest_measurement >= 30 && chest_measurement <= 54)
    {
        if (chest_measurement >= 50) 
        {
            printf("Your suitable size is \"XXXL\".\n");
        } 
        else if (chest_measurement >= 47 ) 
        {
            printf("Your suitable size is \"XXL\".\n");
        }
        else if (chest_measurement >= 44 ) 
        {
            printf("Your suitable size is \"XL\".\n");
        } 
        else if (chest_measurement >= 41 ) 
        {
            printf("Your suitable size is \"L\".\n");
        } 
        else if (chest_measurement >= 38) 
        {
            printf("Your suitable size is \"M\".\n");
        } 
        else if (chest_measurement >= 35 ) 
        {
            printf("Your suitable size is \"S\".\n");
        } 
        else{
            printf("Your suitable size is \"SS\".\n");
        }
    }
    else 
    {
        printf("Sorry, there is no suitable size for you.\n");
    }
    return 0;
}
