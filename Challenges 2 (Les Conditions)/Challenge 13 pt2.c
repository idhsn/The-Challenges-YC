#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2, x, y, cross, minX, minY, maxX, maxY;

    printf("Enter first endpoint (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter second endpoint (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter point to test (x y): ");
    scanf("%d %d", &x, &y);

    cross = (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);

    if (cross == 0) {
        printf("The point is NOT on the segment\n");
    } else {
        if (x1 < x2) {
            minX = x1;
            maxX = x2;
        } else {
            minX = x2;
            maxX = x1;
        }

        if (y1 < y2) {
            minY = y1;
            maxY = y2;
        } else {
            minY = y2;
            maxY = y1;
        }

        if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
            printf("The point IS on the segment\n");
        } else {
            printf("The point is on the line but outside the segment\n");
        }
    }

    return 0;
}
