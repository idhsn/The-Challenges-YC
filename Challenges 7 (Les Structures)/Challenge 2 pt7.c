#include <stdio.h>
#include <stdlib.h>

struct Student {
    char lastName[50], firstName[50];
    int grades[100], numGrades;
};

int main() {
    struct Student students;
    int i;

    printf("Enter first name: ");
    scanf("%s", students.firstName);

    printf("Enter last name: ");
    scanf("%s", students.lastName);

    printf("Enter number of grades: ");
    scanf("%d", &students.numGrades);

    if (students.numGrades > 100 || students.numGrades < 1) {
        printf("Invalid number of grades (must be between 1 and 100).\n");
        return 1;
    }

    printf("Enter %d grades:\n", students.numGrades);
    for (i = 0; i < students.numGrades; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%d", &students.grades[i]);
    }

    printf("\n--- Student Information ---\n");
    printf("First Name : %s\n", students.firstName);
    printf("Last Name : %s\n", students.lastName);
    printf("Grades : ");
    for (i = 0; i < students.numGrades; i++) {
        printf("%d/", students.grades[i]);
    }

    return 0;
}
