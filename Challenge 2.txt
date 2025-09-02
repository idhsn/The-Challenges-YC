#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,C;

    printf("Type in your C ");
    scanf("%f", &C);

    K = C + 273.15 ;

    printf("Your Result In C :%.2f ",K);

    return 0;
}
