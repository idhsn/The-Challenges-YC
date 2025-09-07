#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr1, *arr2;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr1 = (int*) malloc(n * sizeof(int));
    arr2 = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("The array is : ");
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
        printf("%d ",arr1[i]);
    }

    printf("\nThe array clone is : ");
        for (i = 0; i < n; i++) {
        printf("%d ",arr2[i]);
    }

    free(arr1);
    free(arr2);

    return 0;
}
