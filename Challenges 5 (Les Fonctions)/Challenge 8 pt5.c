#include <stdio.h>
#include <stdlib.h>

int numberm, n;
int iseven(number) {
    return (number % 2 == 0) ? 1 : 0;
}

int main() {

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (iseven(n) == 1) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }

    return 0;
}
