#include <stdio.h>
#include <stdlib.h>

int main() {
    char Letter;

    printf("Enter a character: ");
    scanf(" %c", &Letter);

    if (Letter >= 65 && Letter <= 90) {
        printf("The character '%c' is an uppercase letter (A-Z).", Letter);
    } else if (Letter >= 97 && Letter <= 122){
        printf("The character '%c' is a lowercase letter (a-z).", Letter);
    }
    else {
        printf("The character '%c' is neither", Letter);
    }

    return 0;
}
