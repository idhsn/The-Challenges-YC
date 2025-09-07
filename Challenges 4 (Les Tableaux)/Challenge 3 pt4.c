#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, sum = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The sum is : ");
    for (i = 0; i < n; i++) {
        sum = arr[i] + sum;
    }
    printf("%d", sum);

    free(arr);

    return 0;
}
