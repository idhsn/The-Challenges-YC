#include <stdio.h>
#include <stdlib.h>

int n, number;
long factorial(n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %ld\n", number, factorial(number));
    }

    return 0;
}
