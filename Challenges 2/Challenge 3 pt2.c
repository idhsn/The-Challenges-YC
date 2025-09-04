#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, r;

    printf("Give me the 1st number : ");
    scanf("%d", &n1);

    printf("Give me the 2nd number : ");
    scanf("%d", &n2);

    if (n1 == n2) {
        r = (n1 + n2) * 3;
        printf("The result: %d", r);
    } else {
        r = n1 + n2;
        printf("The result: %d", r);
    }

    return 0;
}
