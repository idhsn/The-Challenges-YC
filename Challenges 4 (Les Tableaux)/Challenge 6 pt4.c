#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, mulf;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the multiplication factor : ");
    scanf("%d",&mulf);

    printf("\nThe Calcs Are : \n");
    for (i = 0; i < n; i++) {
        printf("%d x %d = %d \n", arr[i], mulf, arr[i] * mulf);
    }

    free(arr);

    return 0;
}
