#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, min;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest number is : %d", min);

    free(arr);

    return 0;
}
