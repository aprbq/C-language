#include <stdio.h>
int main () {
    int i=1,n1,n2,sum=0,n=0;
    double avg;

    printf("Please enter a lower bound> ");
    scanf("%d",&n1);
    printf("Please enter an upper bound> ");
    scanf("%d",&n2);
    while (n1<=n2){
        printf("%d\n",n1);
        n += 1;
        sum += n1;
        n1++;
    }
    avg = (double)sum/n;
    
    printf("Average of 1 to %d: %.2lf\n",n2,avg);

    return 0;
}