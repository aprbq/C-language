#include <stdio.h>
#include <math.h>

int main()
{
    double n1; //input varible
    int n2; //input varible
    double n3; //output varible
    
    printf("Please enter a real number (n1)> ");
    scanf("%lf",&n1);

    printf("Please enter a integer number (n2)> ");
    scanf("%d",&n2);

    printf("n1 = %f and n2 = %d",n1,n2);

    n3 = (int)n1 + n2;
    printf("\nSo, n3 = %f",n3);

    return 0;
}