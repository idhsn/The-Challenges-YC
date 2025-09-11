#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    float width, length;
};

float calcuteArea (struct Rectangle r){
    return r.length * r.width;
}

int main()
{
    struct Rectangle rr;
    float area;

    printf("Enter the width : ");
    scanf("%f", &rr.width);
    printf("Enter the length : ");
    scanf("%f", &rr.length);

    area = calcuteArea(rr);

    printf("You area is : %f", area);

return 0;
}
