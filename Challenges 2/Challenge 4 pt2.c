#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;


    printf("Enter A : ");
    scanf("%lf", &a);


    if (a == 0) {
        printf("Ce n'est pas une equation du second degree.\n");
        return 1;
    }
    printf("entrez B : ");
    scanf("%lf", &b);
    printf("entrez C : ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    printf("Delta = %.2lf\n", delta);


    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Deux solutions reelles distinctes :\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Une solution reelle double :\n");
        printf("x = %.2lf\n", x1);
    } else {
        printf("Pas de solution reelle.\n");
    }

    return 0;
}
