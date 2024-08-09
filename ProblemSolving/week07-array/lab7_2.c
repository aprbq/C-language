#include <stdio.h>

void print_array(int [], int);
void insertion_sort(int [], int);

int main(void){
    printf("Ascending Insertion Sort\n");
    int arr[] = {3,0,1,8,7,2,5,4,9,6},n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: ");
    print_array(arr,n);
    insertion_sort(arr,n);
    printf("Array after sorting:  ");
    print_array(arr,n);
    return 0;
}
void print_array(int arrp[], int s){
    for(int i = 0; i < s; i++) {
        printf("  %d",arrp[i]);
    }
    printf("\n");
}
void insertion_sort(int arrs[], int s) {
    int i, key, j;
	for (i = 1; i < s; i++)
	{
		key = arrs[i];
		j = i - 1;
		while (j >= 0 && arrs[j] > key)
		{
			arrs[j + 1] = arrs[j];
			j = j - 1;
		}
		arrs[j + 1] = key;
	}
}
