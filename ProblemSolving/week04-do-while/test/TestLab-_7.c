#include <stdio.h>
int main () {
    int i,number,sum=0,n=0;

    printf("Please enter a positive number> ");
    scanf("%d",&number);
    i = number;
    while (i>=1){
       if (i % 7 == 0) {
        printf("%d\n",i);
        n += 1;
       }
       i--;
    }
    printf("There are %d numbers (of the range 1 - %d) that can be factored by 7. \n",n,number);

    return 0;
}