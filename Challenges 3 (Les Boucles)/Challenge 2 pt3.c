#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n ,f = 1;

    printf("Type in a positive number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d * %d = ", f, i);
            f = f * i;
            printf("%d \n",f);
    }
        printf("Factorial of %d is: %d\n", n, f);
    }

    return 0;
}
