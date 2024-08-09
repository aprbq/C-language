#include <stdio.h>
int convert_to_square_metre(int, int, int);

int main(void) {
    int r,n,w;
    printf("Enter Thai area unit (r-n-w): ");
    scanf("%d-%d-%d",&r,&n,&w);
    int sum = convert_to_square_metre(r, n, w);
    printf("This Thai area unit is equal to %d square meters.",sum);
    return 0;
}
int convert_to_square_metre(int r, int n, int w) {
    int total=0;
    total = r*1600 + n*400 + w*4;
    return total;
}