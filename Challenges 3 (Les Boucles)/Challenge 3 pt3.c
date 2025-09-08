#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n ,sum = 0;

    printf("Type in a positive number: ");
    scanf("%d", &n);


        for (i = 1; i <= n; i++) {
            printf("%d + %d = ", sum, i);
            sum = sum + i;
            printf("%d \n",sum);
    }
        printf("Sum of %d numbers is: %d\n", n, sum);


    return 0;
}
