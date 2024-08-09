#include <stdio.h>
int main () {
    int i=1,n,sum=0;
    double avg;

    printf("Please enter a positive number> ");
    scanf("%d",&n);
    while (i<=n){
        sum += i;
        i++;
    }
    avg = (double)sum/n;
    
    printf("Average of 1-%d: %.2lf\n",n,avg);

    return 0;
}