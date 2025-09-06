#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, a = 0, b = 1, n1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");

    for (i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            n1 = a + b;
            printf("%d ", n1);
            a = b;
            b = n1;
        }
    }

    return 0;
}
