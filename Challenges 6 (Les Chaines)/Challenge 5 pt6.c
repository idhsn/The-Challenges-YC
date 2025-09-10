#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100], temp;
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);
    for ( i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
