#include <stdio.h>

void read_elements(int [], int);
void print_array(int [], int);

int main(void){
    int arr[5];
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    read_elements(arr,arr_size);
    print_array(arr,arr_size);
    return 0;
}
void read_elements(int arrp[], int s) {
    for(int i = 0; i < s; i++) {
        printf("Enter the value for the element: ");
        scanf("%d",&arrp[i]);
    }

}

void print_array(int arrp[], int s) {
    for(int i=0; i<s; i++) {
        printf("%d\t",arrp[i]);
    }
}
