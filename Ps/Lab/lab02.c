#include <stdio.h>
int main(void) {
    int low,high,k=1,o=1,i=1;
    while (k==1)
    {
        printf("low: ");
        scanf("%d",&low);
        if(low<-25){
            printf("low or equal -25!\n");
        }
        else {
            k=0;
        }
    } 
    while (o==1)
    {
        printf("High: ");
        scanf("%d",&high);
        if(high<low || high>25) {
            printf("high equal or lower 25!\n");
        }
        else {
            o=0;
        }
    }
    printf("(%d, %d]\n",low,high);
    
    for(i = low + 1; i <= high; i++) {
        if (i%2 != 0) {
            printf("%d",i);
            if (i < high-1)
            {
                printf(", ");
            }
            else
            {
                printf(".");
            }
        }
        
    }
    return 0;
}