#include <stdio.h>
#include <stdlib.h>

int main(){
    float Number;

    printf("Type in A Number : ");
    scanf("%f",&Number);

    if (Number > 0){
        printf("The Number %.2f Is Positive",Number);
    }
    else if (Number < 0){
        printf("The Number %.2f Is Negative",Number);
    }
    else {
        printf("The Number Is Null");
    }
    return 0;
}
