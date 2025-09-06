#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, original, binary[32], i = 0, j;

    printf("Enter a decimal Number: ");
    scanf("%d", &n);

    original = n;

    if (n == 0) {
        printf("Binary: 0\n");
        printf("Hexadecimal: 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    printf("Hexadecimal: %x\n", original);

    return 0;
}
