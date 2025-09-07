#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, i, *arr1, *arr2, *merged, total;

    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    arr1 = (int*) malloc(n1 * sizeof(int));

    for (i = 0; i < n1; i++) {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements for the second array: ");
    scanf("%d", &n2);
    arr2 = (int*) malloc(n2 * sizeof(int));

    for (i = 0; i < n2; i++) {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    total = n1 + n2;
    merged = (int*) malloc(total * sizeof(int));

    for (i = 0; i < total; i++) {
        if (i < n1) {
            merged[i] = arr1[i];
        } else {
            merged[i] = arr2[i - n1]:
        }
    }

    printf("Merged array: ");
    for (i = 0; i < total; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
