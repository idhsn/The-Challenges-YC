#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100], sub[100];

    printf("Enter the main string: ");
    scanf(" %s", str);

    printf("Enter the substring: ");
    scanf(" %s", sub);

    if (strstr(str, sub) != 0)
        printf("Substring found in the main string.\n");
    else
        printf("Substring not found.\n");

    return 0;
}
