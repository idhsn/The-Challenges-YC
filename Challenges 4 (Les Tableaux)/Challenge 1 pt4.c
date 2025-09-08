#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[5] = {1,2,3,4,5}, size = 5, i;

    for (i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
