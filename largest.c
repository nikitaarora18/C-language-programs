#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = a;

    if (b > largest) {
        largest = b;
    }

    if (c > largest) {
        largest = c;
    }

    printf("The largest value is: %d\n", largest);

    return 0;
}
