#include <stdio.h>
float findaverage(int arr[], int n);
int main() {
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    float avg = findaverage(arr, n);

    printf("\nAverage = %.2f\n", avg);

    return 0;
}
float findaverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}
