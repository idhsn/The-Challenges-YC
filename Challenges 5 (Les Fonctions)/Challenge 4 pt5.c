#include <stdio.h>
#include <stdlib.h>

int minimum(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1, n2, result;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    result = minimum(n1, n2);

    printf("The minimum is: %d\n", result);

    return 0;
}
