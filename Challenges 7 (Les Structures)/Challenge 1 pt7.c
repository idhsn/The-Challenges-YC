#include <stdio.h>
#include <stdlib.h>

struct Person {
    char lastName[50];
    char firstName[50];
    int age;
};

int main() {
    struct Person employee;

    printf("Enter first name: ");
    scanf("%s", employee.firstName);

    printf("Enter last name: ");
    scanf("%s", employee.lastName);

    printf("Enter age: ");
    scanf("%d", &employee.age);

    printf("\n--- Employee Information ---\n");
    printf("First Name: %s\n", employee.firstName);
    printf("Last Name : %s\n", employee.lastName);
    printf("Age       : %d\n", employee.age);

    return 0;
}
