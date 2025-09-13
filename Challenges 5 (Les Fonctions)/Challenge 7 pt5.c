#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int len = strlen(str), i;
    for ( i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100] = "Hello World";
    printf("Original: %s\n", str);
    reverse_string(str);
    printf("Reversed: %s\n", str);
    return 0;
}
