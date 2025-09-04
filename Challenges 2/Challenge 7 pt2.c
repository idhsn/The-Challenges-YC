#include <stdio.h>
#include <stdlib.h>

int main() {
    char Letter;

    printf("Enter a character: ");
    scanf(" %c", &Letter);

    if (Letter >= 65 && Letter <= 90) {
        printf("The character '%c' is an uppercase letter (A-Z).", Letter);
    } else {
        printf("The character '%c' is not an uppercase letter.", Letter);
    }

    return 0;
}
