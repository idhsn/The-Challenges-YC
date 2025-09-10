#include <stdio.h>
#include <stdlib.h>

int length(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char text[100];

    printf("Enter a string : ");
    fgets(text, sizeof(text), stdin);

    printf("The length of the string is: %d\n", length(text) - 1);

    return 0;
}
