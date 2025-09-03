#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    double r, volume;

    printf("Enter radius: ");
    scanf("%lf", &r);

    volume = (4.0 / 3.0) * 3.14159 * pow(r, 3);

    printf("Volume of the sphere: %.4f\n", volume);
    return 0;
}
