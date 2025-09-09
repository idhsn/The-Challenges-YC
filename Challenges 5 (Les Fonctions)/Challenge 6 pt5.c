#include <stdio.h>
#include <stdlib.h>

int n, i;
long fabanocci(n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fabanocci(n-1) + fabanocci(n-2);
}

int main() {

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci term F(%d) = %ld\n", n, fabanocci(n));
    }

    return 0;
}
