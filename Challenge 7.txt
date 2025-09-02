#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float n1, n2, n3, moyenne;

    printf("the first number (2) : ");
    scanf("%f", &n1);

    printf("the second number (3) : ");
    scanf("%f", &n2);

    printf("the third number (5) : ");
    scanf("%f", &n3);

    moyenne = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);

    printf("La moyenne : %.2f\n", moyenne);

    return 0;
}
