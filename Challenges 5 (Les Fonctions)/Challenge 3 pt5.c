#include <stdio.h>
#include <stdlib.h>

int maximum(int a, int b) {
    if (a > b) {
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

    result = maximum(n1, n2);

    printf("The maximum is: %d\n", result);

    return 0;
}
