#include <stdio.h>

void printNumber(int [], int);

int main() {

    int number;
    printf("How many number: ");
    scanf("%d", &number);

    // สร้าง array ชนิด int เพื่อเก็บข้อมูล
    int arr[number];

    // ป้อนตัวเลขใส่ใน array
    for (int i = 0; i < number; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // print array
    printf("\nNumbers in array = ");
    printNumber(arr, number);

    int key = 0, temp = 0;

    //Sort by Selection Sort
    for (int i = 0; i<number-1; i++) {
        key = i;
        for (int j = i+1; j<number; j++) {
            if (arr[key] > arr[j]) {
                key = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }

    // Calculate
    int min = arr[0], max = arr[number-1];
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Answer = %d\n", (max-min));
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