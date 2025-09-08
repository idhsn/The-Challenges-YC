#include <stdio.h>
#include <stdlib.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2, result;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    result = somme(n1, n2);

    printf("The sum is: %d\n", result);

    return 0;
}
