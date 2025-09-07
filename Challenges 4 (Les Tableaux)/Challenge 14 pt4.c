#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, avg, sum;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    avg = sum / n;
    printf("The Average Is : %d", avg);

    free(arr);
    return 0;
}
