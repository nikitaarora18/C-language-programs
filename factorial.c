#include <stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while(i <= n) {
        fact = fact * i;   
        i++;              
    }

    printf("Factorial = %d\n", fact);

    return 0;
}

