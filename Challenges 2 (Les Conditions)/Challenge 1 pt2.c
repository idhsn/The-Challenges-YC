#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Enter A Number : ");
    scanf("%d",&N);

    if ( N % 2 == 0){
        printf("The Number %d is Even",N);
    }
    else {
        printf("The Number %d is Odd",N);
    }
    return 0;
}
