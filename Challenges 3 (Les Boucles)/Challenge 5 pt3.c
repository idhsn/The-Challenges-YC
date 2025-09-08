#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, pow, res = 1, i;

    printf("give me the number : ");
    scanf("%d",&num);
    printf("give me the power : ");
    scanf("%d",&pow);

    if (pow == 0) {
        res = 1;
    } else if (pow > 0) {
        for (i = 0; i < pow; i++){
            res = res * num;
        }
    } else {
        printf("Negative exponent not handled in this code.\n");
    }

    printf("%d at the power of %d is %d\n", num, pow, res);

    return 0;
}
