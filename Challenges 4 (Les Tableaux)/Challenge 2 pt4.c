#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int)); //could work without malloc but its luck based cuz it gonna store on a random memory

    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
