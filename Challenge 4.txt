#include <stdio.h>
#include <stdlib.h>

int main()
{
    float KMh,ms;

    printf("Type in your KM/h Ratio: ");
    scanf("%f", &KMh);

    ms = KMh * 0.27778 ;

    printf("Your Result In m/s Is :%.2f ",ms);

    return 0;
}
