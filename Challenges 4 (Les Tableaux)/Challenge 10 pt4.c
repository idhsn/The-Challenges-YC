#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, target, checker = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the target : ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("The element %d is at position %d.\n", target, i + 1);
            checker = 1;
            break;
        }
    }

    if (checker == 0) {
        printf("The element %d does not exist in this array.\n", target);
    }

    free(arr);
    return 0;
}
