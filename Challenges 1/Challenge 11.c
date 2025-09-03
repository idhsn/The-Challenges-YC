#include <stdio.h>
#include <stdlib.h>

int main() {
    float length, width, area;

    printf("Enter The width: ");
    scanf("%f",&width);
    printf("Enter The length: ");
    scanf("%f",&length);


    area = length * width;

    printf("Area of the rectangle: %.2f\n", area);
    return 0;
}
