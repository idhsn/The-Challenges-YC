#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    float salary;
};

int main() {
    int n = 2, i;
    struct Employee *arr;
    arr = malloc(n * sizeof(struct Employee));

    strcpy(arr[0].name, "Alice");
    arr[0].salary = 3000;
    strcpy(arr[1].name, "Bob");
    arr[1].salary = 3500;

    for (i = 0; i < n; i++)
        printf("%s %.2f\n", arr[i].name, arr[i].salary);

    free(arr);
    return 0;
}
