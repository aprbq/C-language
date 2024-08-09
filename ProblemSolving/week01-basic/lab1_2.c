#include <stdio.h>
#include <math.h>
#define INTEREST 1.5
int main()
{   
    double car_price,car_down,time_month; //ตัวแปรรับราคารถ, เงินดาวน์, ระยะเวลา 
    double an_interest,amount_car,payment;//อัตราดอกเบี้ยต่อเดือน, ราคารถต้องผ่อน, ราคาผ่อนต่อเดือน 

    printf("Please enter the purchase price> ");
    scanf("%lf",&car_price);

    printf("Please enter the down payment> ");
    scanf("%lf",&car_down);

    printf("Please enter the total number of payment> ");
    scanf("%lf",&time_month);
    printf("*******************************");
    
    an_interest = INTEREST/12;
    amount_car = car_price - car_down;
    payment = (an_interest*amount_car)/(1-(pow((1+an_interest),-time_month)));
    
    printf("\nThe amount borrowed: $%.2f",amount_car);
    printf("\nThe monthly payment: $%.2f",payment);

    return 0;
}