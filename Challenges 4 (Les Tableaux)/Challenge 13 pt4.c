#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr;

    printf("Enter the number of elements : ");
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

    printf("\nThe array with only odd numbers : ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 1){
            printf("%d ",arr[i]);
        }
    }

    free(arr);
    return 0;
}
