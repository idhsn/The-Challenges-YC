#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("The Even numbers between 2 and 100 are:\n");

    for (i = 2; i <= 100; i += 2) {
        printf("%d - ", i);
    }

    return 0;
}
