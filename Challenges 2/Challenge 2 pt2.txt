#include <stdio.h>

int main() {
    char C;

    printf("Enter a character: ");
    scanf(" %c", &C);

    switch (C) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", C);
            break;
        default:
            printf("%c is not a vowel.\n", C);
    }

    return 0;
}
