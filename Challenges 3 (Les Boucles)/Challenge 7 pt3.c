#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, reversed = 0, lastdigit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number > 0) {
        lastdigit = number % 10;
        reversed = reversed * 10 + lastdigit;
        number = number / 10;
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
