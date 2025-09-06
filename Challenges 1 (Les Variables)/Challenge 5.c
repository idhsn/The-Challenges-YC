#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    printf("Type In The Tempreture Of the Water : ");
    scanf("%d",&T);

    if (T <= 0){
        printf("The Water Is Solid Or Ice");
    }

    else if (T > 0 && T < 100){
        printf("The Water Is Liquid");
    }

    else {
        printf("The Water Is Gaz");
        }
    return 0;
}
