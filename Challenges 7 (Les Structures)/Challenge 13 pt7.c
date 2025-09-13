#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x, y;
};

struct Graphic {
    struct Point *points;
};

int main() {
    int totalPoints = 3, i;
    struct Graphic g;
    g.points = malloc(sizeof(struct Point) * totalPoints);

    g.points[0].x = 1; g.points[0].y = 2;
    g.points[1].x = 3; g.points[1].y = 4;
    g.points[2].x = 5; g.points[2].y = 6;

    for ( i = 0; i < totalPoints; i++)
        printf("Point %d: (%d,%d)\n", i+1, g.points[i].x, g.points[i].y);

    free(g.points);
    return 0;
}
