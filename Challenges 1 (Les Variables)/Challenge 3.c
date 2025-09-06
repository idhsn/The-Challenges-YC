#include <stdio.h>
#include <stdlib.h>

int main()
{
    float KM,Y;

    printf("Type in your KM Ratio: ");
    scanf("%f", &KM);

    Y = KM * 1093.61 ;

    printf("Your Result In Yards Is :%.2f ",Y);

    return 0;
}
