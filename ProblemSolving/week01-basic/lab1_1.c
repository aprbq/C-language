#include <stdio.h>
#define PI 3.14159

int main()
{
    double diameter,vol_sp;

    printf("Please enter a diameter> ");
    scanf("%lf",&diameter);

    diameter = diameter/2;
    vol_sp = (4*PI*diameter*diameter*diameter)/3;
    
    printf("The volume of sphere is %.4f",vol_sp);

    return (0);
}

