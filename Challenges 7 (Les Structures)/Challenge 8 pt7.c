#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Circle {
    float radius;
};

float area(struct Circle c) {
    return 3.14 * c.radius * c.radius;
}

int main() {
    struct Circle c;

    printf("Type in your radius : ");
    scanf("%f", &c.radius);

    printf("Circle area: %.2f\n", area(c));
    return 0;
}
