#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    double x1, y1, z1;
    double x2, y2, z2;
    double distance;

    printf("Enter coordinates of Point 1 (x1 y1 z1): ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Enter coordinates of Point 2 (x2 y2 z2): ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("The Euclidean distance between the two points is: %.4f\n", distance);

    return 0;
}
