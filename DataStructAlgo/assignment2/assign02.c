#include <stdio.h>

void printNumber(int [], int);

int main() {
    int length;
    printf("How many number: ");
    scanf("%d", &length);

    // สร้าง array ชนิด int เพื่อเก็บข้อมูล
    int arr[length];

    // ป้อนตัวเลขใส่ใน array
    for (int i = 0; i < length; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // print array
    printf("\nNumbers in array = ");
    printNumber(arr, length);

    int max = arr[0], min = arr[0], sum;

    //Find max and min
    for (int i=1; i<length; i++)
    {
        if (arr[i]>max) max = arr[i];
        if (arr[i]<min) min = arr[i];
    }

    //max-min Difference
    sum = max-min;
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Answer = %d", sum);
    return 0;
}

void printNumber(int arrp[], int n) {
    printf("[");
    for(int i = 0; i < n; i++) {
        
        if (i != n-1) {
            printf("%d, ",arrp[i]);
        }
        else {
            printf("%d",arrp[i]);
        }
    }
    printf("]\n\n");
}