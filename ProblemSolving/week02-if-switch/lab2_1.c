#include <stdio.h>

int main() {
    int a, b, c, d;
    
    printf("Please enter scores from the judges (a-b-c-d): ");
    scanf("%d-%d-%d-%d", &a, &b, &c, &d);
    
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    
    float final_score = (a + b + c + d - max - min) / (float)2;
    
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("The final score is: %.2f\n", (float)final_score);
    
    return 0;
}

