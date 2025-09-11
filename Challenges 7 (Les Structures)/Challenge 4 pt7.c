#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x, y;
};

int main() {
    struct Point *ptr;

    printf("Enter x : ");
    scanf("%d", &(*ptr).x);

    printf("Enter y : ");
    scanf("%d", &(*ptr).y);

    printf("Point coordinates: (%d, %d)", (*ptr).x, (*ptr).y);

    return 0;
}
