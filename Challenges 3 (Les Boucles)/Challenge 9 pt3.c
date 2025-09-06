#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;

    printf("Enter a positive integer : ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            count++;
            n = n / 10;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
