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

    printf("The array reversed is : ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
