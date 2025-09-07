#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, oldElem, newVal;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to replace (or enter 0 for none) : ");
    scanf("%d", &oldElem);

    if (oldElem == 0) {
    printf("Your array is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
    }

    printf("Enter the new value : ");
    scanf("%d", &newVal);

    for (i = 0; i < n; i++) {
        if (i == oldElem - 1) {
            arr[i] = newVal;
        }
    }

    printf("Modified array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
