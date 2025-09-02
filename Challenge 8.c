#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    double a, b, c, moyenneGeometrique;


    printf("enter the 1st number : ");
    scanf("%lf", &a);

    printf("enter the 2nd number : ");
    scanf("%lf", &b);

    printf("enter the 3rd number : ");
    scanf("%lf", &c);

    moyenneGeometrique = pow(a * b * c, 1.0 / 3.0);
    printf("La moyenne géométrique est : %.4f\n", moyenneGeometrique);

    return 0;
}
