#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
        printf("%d + ... = %d\n", i, sum);
    }

    printf("Total sum of first %d natural numbers : %d\n", n, sum);

    return 0;
}
