#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("The odd numbers between 1 and 100 are:\n");

    for (i = 1; i <= 101; i += 2) {
        printf("%d - ", i);
    }

    return 0;
}
