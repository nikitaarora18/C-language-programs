#include <stdio.h>
void reverse_array(int arr[], int n){
    int start=0,end=n-1,temp;
    while (start < end) {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    printf("\n");

    start++;
    end--;
}
}


int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    reverse_array(arr, n);

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

