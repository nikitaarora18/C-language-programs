#include <stdio.h>
void count_even_odd(int arr[], int n);

int main() {
    int arr[] = {10, 23, 45, 66, 78, 91, 32, 55};
    int n = 8;

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    count_even_odd(arr, n);

    return 0;
}
void count_even_odd(int arr[], int n) {
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\n\nTotal even numbers = %d", even);
    printf("\nTotal odd numbers = %d\n", odd);
}

